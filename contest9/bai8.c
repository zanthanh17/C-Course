#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//bai4: Số đẹp

//Cho số nguyên dương N có ít nhất 2 chữ số, một số được coi là số đẹp nếu 2 chữ số liền kề của nó chỉ lệch nhau đúng 1 đơn vị, ví dụ về số đẹp : 12345, 121212, 78987.

//Hãy kiểm tra xem N có phải là số đẹp hay không?

int check(char c[]){
    for (int i = 0; i < strlen(c) - 1; i++)
    {
        if (abs(c[i] - c[i+1]) != 1)
            return 0;       
    }
    return 1;
}
int main(){
    char c[10000];
    scanf("%s", c);
    if(check(c)) printf("YES");
    else printf("NO");
    return 0;
}