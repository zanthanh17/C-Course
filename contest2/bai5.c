#include <stdio.h>
#include <math.h>

/*Tính tổng : S = 1/2 + 1/4 + 1/6 + 1/8 +…….+ 1/(2n)*/

int main(){
    int n;
    scanf("%d", &n);
    double Tong = 0;
    for (int i = 1; i <= n; i++)
    {
        Tong += (double) 1/(2*i) ;
    }
    printf("%.5lf", Tong);
    return 0;

}