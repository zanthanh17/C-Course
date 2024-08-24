#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//bai4:In ra chữ số


//Cho xâu kí tự S bao gồm chữ cái và chữ số, thực hiện tách riêng chữ số và chữ cái của S.

int main(){
    char c[10005];
    scanf("%s", c);
    for (int i = 0; i < strlen(c); i++)
    {
        if (isdigit(c[i]))
        {
            printf("%c", c[i]);
        }       
    }
    printf("\n");
    for (int i = 0; i < strlen(c); i++)
    {
        if (isalpha(c[i]))
        {
            printf("%c", c[i]);
        }       
    }   
    return 0;
}