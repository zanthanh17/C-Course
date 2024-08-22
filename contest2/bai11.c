#include <stdio.h>
#include <math.h>

/*Tính tổng : S= -1 + 2 - 3 + 4 - 5 + ...... + (-1)^n*n*/

int main(){
    long long n;
    scanf("%lld", &n);
    long long Tong = 0;
    for (int i = 1; i <= n; i++)
    {       
            Tong += (pow(-1,i) * i);
    }
    printf("%lld", Tong);
    return 0;

}