#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Đếm số lượng tự khác nhau


//Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện đếm số lượng các từ khác nhau trong xâu mà không phân biệt hoa thường, ví dụ "28TecH" được coi là giống với từ "28teCH".



int check(char c[],char d[]){
    if (strlen(c) != strlen(d))
    {
        return 0;
    }
    
    for (int i = 0; i < strlen(c); i++)
    {
        if(tolower(c[i]) != tolower(d[i]))
           return 0;
    }
    return 1;
}

int main(){
    char c[10005];
    gets(c);
    char* token = strtok(c, " ");
    char a[100][100];
    int n = 0;
    int cnt = 0;
    while (token != NULL)
    {
        strcpy(a[n], token);
        ++n;
        if(check(token, "28tech")){
        ++cnt;
        }
        token = strtok(NULL, " ");
    }
    printf("%d", abs(n - cnt + 1));
}
    
   
