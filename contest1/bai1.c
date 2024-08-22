#include <stdio.h>
#include <math.h>

int main(){
     int x;
     scanf("%d", &x);
     long long Ax = 1ll * x * x * x + 3ll * x * x + x + 1;    
     printf("%lld\n", Ax);
     return 0;
}