#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//In hoa, in thường

//Cho một xâu kí tự, hãy viết hoa và viết thường các kí tự là chữ cái trong xâu, các kí tự không phải là chữ cái thì không thay đổi.

int main(){
    char c[1000];
    gets(c);
    int digit = 0, alpha = 0, kitu = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        c[i] = toupper(c[i]);
    }
    printf("%s\n", c);
    for (int i = 0; i < strlen(c); i++)
    {
        c[i] = tolower(c[i]);
    }
    printf("%s", c);

}