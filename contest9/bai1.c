#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(){
    char c[1000];
    gets(c);
    int digit = 0, alpha = 0,spec = 0;
    for(int i = 0; i < strlen(c); i++){
        if (isdigit(c[i]))
        {
            digit++;
        }
        else if(isalpha(c[i])){
            alpha++;
        }
        else
            spec++;      
    }
    printf("%d %d %d", alpha, digit, spec );
}