#include <stdio.h>
#include <math.h>

//Cho mảng số nguyên A[] gồm N phần tử, hãy tính tổng, tích của các phần tử trong mảng và lấy dư với 10^9+7.
int a[100000];


int main() { 
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int mod = 1000000007;
    long long Tong = 0,Tich = 1;
    for(int i = 0; i < n; i++){
        Tong += a[i];
        Tong %= mod;
        Tich *= a[i];
        Tich %= mod;
        }
    printf("%lld\n%lld", Tong % mod,Tich % mod);  
    return 0;
}

