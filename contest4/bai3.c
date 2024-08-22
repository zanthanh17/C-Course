#include <stdio.h>


//Tính tổng hàm S(n) = 1^3 + 2^3 + 3^3 + 4^3 + .. + n^3 bằng đệ quy

long long S(int n){
    if(n==0)
      return 0;
    else 
      return n*n*n + S(n-1);
}

int main() { 
    int n;
    scanf("%d",&n);
    printf("%lld", S(n));
    return 0;
}

