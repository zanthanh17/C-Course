#include <stdio.h>


//Bài toán cơ sở : S(1) = 1, Công thức truy hồi : S(n) = n + S(n - 1) với n > 1

int S(int n){
    if(n==0)
      return 0;
    else 
      return n +S(n-1);
}

int main() { 
    int n;
    scanf("%d",&n);
    printf("%d", S(n));
    return 0;
}

