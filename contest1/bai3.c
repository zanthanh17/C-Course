#include <stdio.h>
#include <math.h>

int main(){
     int C;
     scanf("%d", &C);
     double F = ((double)C * 9 / 5) + 32;    
     printf("%.2lf\n", F);
     return 0;
}