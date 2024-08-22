#include <stdio.h>
#include <math.h>

/*Nhập vào n nguyên dương không qua 10^6, tính và in tổng sau ra màn hình. S=1+3+5+7+.....+2*n-1*/

int main(){
    long long n;
    scanf("%lld", &n);
    long long Tong = 0;
    for (int i = 1; i <= 2*n-1; i++)
    {       
        if (i % 2 != 0)
        {
            Tong += i;
        }
    }
    printf("%lld", Tong);
    return 0;

}