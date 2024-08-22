#include <stdio.h>
#include <math.h>

//ma tran xoan oc

long long f[100];
void fibonacci(){
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 90; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
}
int main(){
    fibonacci();
    int n;
    long long a[100][100];
    scanf("%d", &n);
    int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
    int dem = 0;
    while (dem < n*n)
    {
        for (int i = c1; i <= c2; i++)
    {   
        a[h1][i] = f[dem]; ++dem;
    }
    ++h1;
    for (int i = h1; i <= h2; i++)
    {   
        a[i][c2] = f[dem]; ++dem;
    }
    --c2;
    for (int i = c2; i >= c1; i--)
    {   
        a[h2][i] = f[dem]; ++dem;             
    }
    --h2;
    for (int i = h2; i >= h1; i--)
    {   
        a[i][c1] = f[dem]; ++dem;
    }
    ++c1;
    }    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lld ", a[i][j]);
        }  
        printf("\n");      
    }
}   