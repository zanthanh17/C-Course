#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Tí và 28tech

//Mặc dù là 2 người bạn thân nhưng Tí và Tèo lại rất khác nhau khi nói đến 28tech, Tí thì lại là người rất thích 28tech.

//Vì thế Tí nhờ bạn đếm các từ 28tech xuất hiện trong một xâu S cho trước.

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
    int cnt = 0;
    while (token != NULL)
    {
        if(check(token, "28tech")){
        ++cnt;
        }
        token = strtok(NULL, " ");
    }
    printf("%d", cnt);
}
