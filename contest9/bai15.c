#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Ngày sinh

//Cho ngày sinh của một người theo dạng ngày/tháng/năm. Bạn hãy chuẩn hóa ngày sinh này về dạng dd/mm/yyyy.

//Ví dụ : nếu ngày sinh là 1/10/2002 thì được chuẩn hóa thành 01/10/2002, hoặc 5/2/2002 thì được chuẩn hóa thành 05/02/2002.


int main(){
    char c[1000];
    scanf("%s", c);
    char* token = strtok(c,"/");
    while (token != NULL)
    {
        if(strlen(token) == 1){
            printf("0%s", token);
        }
        else printf("%s", token);
        if (strlen(token) != 4)
        {
            printf("/");
        }
        token = strtok(NULL,"/");
    }
}
