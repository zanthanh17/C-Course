#include <stdio.h>

/*Năm nhuận là năm chia hết cho 400 hoặc (chia hết cho 4 và không chia hết cho 100).
 Nhập vào N là một năm và kiểm tra xem N có phải là năm nhuận hay không?*/

int main(){
    int n;
    scanf("%d", &n);
    if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 100)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}