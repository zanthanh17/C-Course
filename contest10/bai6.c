#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Xâu đối xứng


//Cho một xâu ký tự S chỉ bao gồm các chữ cái, hãy kiểm tra xem xâu nhập vào có phải là xâu đối xứng hay không?


int doixung(char c[]){
    int left = 0, right = strlen(c) - 1;
    while (left <= right)
    {
        if (c[left] != c[right])
        {
            return 0;
        }
        ++left; --right;
    }
    return 1;
}

int main(){
    char c[100001];
    gets(c); 
    if(doixung(c)){
        printf("YES");
    }
    else printf("NO");
}
    

