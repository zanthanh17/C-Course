#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//Đếm số loại ký tự

//Cho một xâu kí tự, hay đếm số lượng kí tự là chữ cái, chữ số và kí tự đặc biệt (Các kí tự không phải là chữ cái và chữ số).

int main(){
    char c[1000];
    gets(c);
    int digit = 0, alpha = 0, kitu = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        if (isdigit(c[i]))
        {
            digit++;
        }
        else if(isalpha(c[i])){
            alpha++;
        }
        else kitu++;  
    }
    printf("%d %d %d", alpha, digit, kitu);
}