#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//Chuẩn hóa tên 1

//Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người bằng cách viết hoa chữ cái đầu tiên của từng từ và viết thường các chữ cái còn lại.

//Xâu tiếp theo là ngày sinh của người này, bao gồm ngày tháng năm phân cách nhau bằng dấu '/', hãy chuẩn hóa ngày sinh của người này về đúng dạng dd/mm/yyyy.

void chuanhoa(char c[]){
    c[0] = toupper(c[0]);
    for (int i = 1; i < strlen(c); i++)
    {
        c[i] = tolower(c[i]);
    }
}

int main(){
    char c[5000];
    char s[100];
    gets(c); 
    scanf("%s", s);
    char* token = strtok(c," ");
    int n = 0;
    while (token != NULL)
    {
        chuanhoa(token);
        printf("%s", token);
        token = strtok(NULL," ");
        if(token != NULL)
            printf(" ");
    }
    
    printf("\n");

    token = strtok(s, "/");
    while (token != NULL)
    {
        if (strlen(token) == 1)
        {
            printf("0%s/", token);
        }
        else if(strlen(token) == 2){
            printf("%s/", token);
        }
        else printf("%s", token);
        token = strtok(NULL, "/");
    }
}
    
    

