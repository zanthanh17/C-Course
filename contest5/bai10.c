#include <stdio.h>
#include <math.h>

//Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất mà mọi số trong mảng đều chia hết cho số đó. Tìm ước chung lớn nhất

int a[100000];

long long gcd(long long a, long long b){    
        if(b == 0){
            return a;
        }
        else return gcd(b, a % b);
}

int main() { 
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    long long uc = 0;
    for(int i = 0; i < n; i++){
        uc = gcd(uc,a[i]);
    }
    printf("%lld",uc);  
    return 0;
}

