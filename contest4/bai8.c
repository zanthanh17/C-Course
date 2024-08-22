#include <stdio.h>


//Cho một số nguyên không âm N, hãy tính tổng chữ số của N sử dụng kỹ thuật đệ quy.

int S(long long n){
    if(n < 10)
        return n;
    else 
        return n % 10 + S(n/10);
}
int main(){ 
    long long n;
    scanf("%lld",&n);
    printf("%d", S(n));
    return 0;
}

