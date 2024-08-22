#include <stdio.h>


//Tính tổng hàm S(n) = 1^2 + 2^2 + 3^2 + 4^2 + .. + n^2 bằng đệ quy.

int S(int n){
    if(n==0)
      return 0;
    else 
      return n*n +S(n-1);
}

int main() { 
    int n;
    scanf("%d",&n);
    printf("%d", S(n));
    return 0;
}

