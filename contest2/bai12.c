#include <stdio.h>
#include <math.h>

/*Nhập vào n nguyên dương không quá 10^6, tính và in tổng sau ra màn hình S=2+4+6+8+.....+2*n*/

int main(){
    long long n;
    scanf("%lld", &n);
    long long Tong = 0;
    for (int i = 2; i <= 2*n; i++)
    {       
        if (i % 2 == 0)
        {
            Tong += i;
        }
    }
    printf("%lld", Tong);
    return 0;

}