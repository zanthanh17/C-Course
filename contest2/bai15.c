#include <stdio.h>
#include <math.h>

/*Nhập n không âm không quá 15, tính và in ra n!*/

int main(){
    long long n;
    scanf("%lld", &n);
    long long Tich = 1;
    for (int i = 1; i <= n; i++)
    {            
            Tich *= i;
    }
    printf("%lld", Tich);
    return 0;

}