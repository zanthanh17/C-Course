#include <stdio.h>
#include <math.h>

/*Nhập vào n nguyên. Đếm số lượng chữ số của n là số nguyên tố.*/

int main(){
    long long n;
    scanf("%lld", &n);
    int cnt = 0;
    while (n != 0)  
    {
        int r = n % 10;
        if(r == 2 || r == 3 || r == 5 || r == 7)
           ++cnt; 
        n /= 10;
    }
    printf("%d", cnt);
    return 0;

}