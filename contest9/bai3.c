#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//bai3:Tần suất ký tự

//Cho một xâu kí tự, hãy đếm tần suất xuất hiện của các kí tự trong xâu và in ra theo yêu cầu.



int main(){
    char c[1000];
    gets(c);
    int cnt[256]= {0};
    for (int i = 0; i < strlen(c); i++)
    {
        cnt[c[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if(cnt[i]){
           printf("%c %d\n", i, cnt[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < strlen(c); i++)
    {
        if(cnt[c[i]]){
           printf("%c %d\n", c[i], cnt[c[i]]);
           cnt[c[i]] = 0;
        }
    }
    
}