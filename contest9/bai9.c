#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//bai4: Chèn dấu phẩy

//Khi viết 1 số nguyên dương quá lớn, người ta thường thêm các dấu phẩy vào giữa các chữ số cho dễ đọc

//Ví dụ : số N = 123456789 được viết thành 123,456,789, N = 12345 được viết thành 12,345. Nhiệm vụ của bạn là thêm dấu phẩy vào số N

void solve(char c[]){
    char res[10005];
    int index = 0;
    int count = 0;
    for (int i = strlen(c) - 1; i >= 0; i--)
    {
        ++count;
        res[index]=c[i];
        ++index;
        if (count % 3 == 0 && i != 0)
        {
            res[index] = ',';
            ++index;
        }      
    }  
    for (int i = index - 1; i >= 0; i--)
        {
            printf("%c", res[i]);
        } 
}

int main(){
    char c[10005];
    scanf("%s", c);
    solve(c);
    return 0;
}