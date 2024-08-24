#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//bai4: Chèn


//Cho xâu kí tự S và số nguyên K, bạn được yêu cầu chèn dòng chữ "28tech" vào chỉ số K của xâu S

int main(){
    char c[10005];
    int k;
    scanf("%s", c);
    scanf("%d", &k);   
    for (int i = 0; i < k; i++)
    {
        printf("%c", c[i]); 
    }  
    printf("28tech");
    for (int i = k; i < strlen(c); i++)
    {
        printf("%c", c[i]);
    }
    return 0;
}