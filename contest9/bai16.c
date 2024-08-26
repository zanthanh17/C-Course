#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Đếm từ in hoa

//Cho một xâu S bao gồm chữ cái và dấu cách, thực hiện đếm các từ là in hoa trong xâu S.

int check(char c[]){
    for (int i = 0; i < strlen(c); i++)
    {
        if(islower(c[i]))
        return 0;
    }
    return 1;
}

int main(){
    char c[10005];
    gets(c);
    char* token = strtok(c, " ");
    int cnt = 0;
    while (token != NULL)
    {
        if(check(token))
        ++cnt;
        token = strtok(NULL, " ");
    }
    printf("%d", cnt);
}
