#include <stdio.h>
#include <math.h>

int main(){
     int R;
     double pi = 3.14;
     scanf("%d", &R);
     double C = 2 * pi * (double)R;   
     double S = (double)R * pi * (double)R;
     printf("%.4lf %.4lf", C, S);
     return 0;
}