#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//Ký tự xuất hiện ở cả 2 xâu


//Cho 2 xâu kí tự S1 và S2, hãy in ra các kí tự xuất hiện ở cả 2 xâu theo thứ tự từ điển, chú ý mỗi kí tự chỉ liệt kê một lần. Sau đó tiếp tục liệt kê các kí tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển.

int main(){
    char c1[100001];
    char c2[100001];
    gets(c1);
    gest(c2);
    int giao[256]= {0},hop[256] = {0};
    for (int i = 0; i < strlen(c1); i++)
    {
        hop[c1[i]] = 1;
        giao[c1[i]] = 1;
    }
    for (int i = 0; i < strlen(c2); i++)
    {
        hop[c2[i]] = 1;
        if(giao[c2[i]] == 1){
            giao[c2[i]] = 2;
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if(giao[i] == 2){
            printf("%c", i);
        }
    }
    printf("\n");
    for (int i = 0; i < 256; i++)
    {
        if (hop[i])
        {
            printf("%c", i);
        }       
    }  
}