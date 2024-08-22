#include <stdio.h>


//Tính tổng hàm S(n) = -1 + 2 -3 + 4 - 5 + 6 + ... + (-1)^n * n bằng đệ quy

long long S(int n){
    if(n == 0)
      return 0;
    else {
        if(n % 2 == 0)
            return n + S(n-1);
        else 
            return -n + S(n-1);
        }
}

int main() { 
    int n;
    scanf("%d",&n);
    printf("%lld", S(n));
    return 0;
}

