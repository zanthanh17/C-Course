#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//bai4: Tổng chữ số

//Cho một xâu kí tự S chỉ bao gồm chữ số và chữ cái, hãy tính tổng chữ số xuất hiện trong xâu.

int main(){
    char c[10000];
    scanf("%s", c);
    int tong = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        if (isdigit(c[i]))
        {
            tong += c[i] - '0';
        }       
    }
    printf("%d", tong);
    return 0;
}