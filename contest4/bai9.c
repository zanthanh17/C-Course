#include <stdio.h>


//Cho một số nguyên không âm N, hãy đếm số lượng chữ số của N.

int S(long long n){
    if(n < 10)
        return 1;
    else 
        return 1 + S(n/10);
}
int main(){ 
    long long n;
    scanf("%lld",&n);
    printf("%d", S(n));
    return 0;
}

