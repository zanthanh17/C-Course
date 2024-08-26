#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Từ chẵn lẻ

//Cho xâu kí tự S, trong xâu S có nhiều từ được phân cách nhau bởi 1 hoặc 1 vài dấu cách.

//Nhiệm vụ của bạn là đối với những từ xuất hiện ở vị trí lẻ thì thì in ra từ đó, còn những từ xuất hiện ở vị trí chẵn thì trước khi in từ đó bạn phải lật ngược từ đó trước.

void latnguocxau(char c[]){
    int l = 0, r =strlen(c) - 1;
    while(l <= r){
        char tmp = c[l];
        c[l] = c[r];
        c[r] = tmp;
        ++l; --r;
    }
}

int main(){
    char c[10005];
    gets(c);
    char* token = strtok(c, " ");
    char a[100][100];
    int n = 0;
    while (token != NULL)
    {
        strcpy(a[n], token);
        ++n;
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0){
            printf("%s", a[i]);
        }
        else{
            latnguocxau(a[i]);
            printf("%s", a[i]);
        }
        if(i != n - 1)
        printf(" ");
    }
    
}
