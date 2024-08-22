#include <stdio.h>
#include <math.h>

int main(){
     int a, b, c;
     scanf("%d %d %d", &a, &b, &c);
     long long S = a*(b+c)+b*(a+c);    
     printf("%lld\n", S);
     return 0;
}