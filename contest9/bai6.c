#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//bai4: Lật ngược, in hoa, in thường


//Cho xâu kí tự S có không quá 10000 kí tự, S bao gồm kí tự in hoa, in thường, chữ số và kí tự đặc biệt.

//Hãy tự viết 3 hàm lật ngược xâu, viết hoa và viết thường xâu kí tự


void latnguocxau(char c[]){
    int l = 0, r =strlen(c) - 1;
    while(l <= r){
        char tmp = c[l];
        c[l] = c[r];
        c[r] = tmp;
        ++l; --r;
    }
}

void viethoaxau(char c[]){
    for (int i = 0; i < strlen(c); i++)
    {
        c[i] = toupper(c[i]);
    }
}

void vietthuongxau(char c[]){
    for (int i = 0; i < strlen(c); i++)
    {
        c[i] = tolower(c[i]);
    }
}
int main(){
    char c[10000];
    scanf("%s", c);
    latnguocxau(c);
    printf("%s\n", c);
    latnguocxau(c);
    vietthuongxau(c);
    printf("%s\n", c);
    viethoaxau(c);
    printf("%s", c);
    return 0;
}