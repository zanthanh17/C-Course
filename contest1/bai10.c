#include <stdio.h>

/*Cho 3 cạnh a, b, c là độ dài 3 cạnh của tam giác, kiểm tra xem a, b, c có thể tạo thành một tam giác hợp lệ hay không?*/

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if((a+b)>c && (a+c)>b && (b+c)>a){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}