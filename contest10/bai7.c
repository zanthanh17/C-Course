#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Xâu pangram


//Xâu pangram là xâu có chứa đầy đủ các kí tự từ A tới Z không phân biệt chữ hoa hay thường.

//Nhập vào xâu S và kiểm tra xem xâu S có phải là xâu pangram hay không?


int main(){
    char c[100001];
    gets(c); 
    char mark[26] = {0};
    for (int  i = 0; i < strlen(c); i++)
    {
        char tmp = tolower(c[i]);
        mark[tmp - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (mark[i] == 0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
    

