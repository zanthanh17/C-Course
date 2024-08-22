#include <stdio.h>
#include <math.h>

/*Cho 2 số nguyên a và b. Bạn hãy tìm 2 số sau, số thứ 1 là số lớn nhất <= a mà chia hết cho b, số thứ 2 là số nhỏ nhất >=a mà chia hết cho b.
 Chú ý các bạn không được dùng vòng lặp.*/

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int x = a / b * b;
    int y;

    if( a % b == 0)
    {
        y = a;
    }
    else {
        y = (a / b + 1) * b ;
    }
    printf("%d\n%d", x , y);
    return 0;
}