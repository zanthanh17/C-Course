#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//bai4: Ký tự lặp đầu tiên


//Cho xâu kí tự S, bạn hãy tìm kí tự được lặp lại đầu tiên trong xâu S.

//Nếu xâu S không có kí tự bị lặp lại thì in ra NONE

int main(){
    char c[10005];
    scanf("%s", c);
    int cnt[256] = {0};
    for (int i = 0; i < strlen(c); i++)
    {
        if(cnt[c[i]] != 0){
            printf("%c", c[i]); 
            return 0;
        }
        cnt[c[i]] = 1;
    }  
    printf("NONE");
    return 0;
}