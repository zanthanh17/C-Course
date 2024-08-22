#include <stdio.h>


//Thập phân sang nhị phân

void DectoBin(long long n){
    if(n == 0)
        return;
    else {
        DectoBin(n/2);
        printf("%lld", n % 2);
    }
}
int main() { 
    long long n;
    scanf("%lld",&n);
    DectoBin(n);
    return 0;
}

