#include <stdio.h>
#include <math.h>

//bai2: Tổng hàng, tổng cột

void nhap(int a[][200], int n, int m){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }       
    }
}

void in(int a[][200], int n, int m){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }  
        printf("\n");     
    }
}

int Tong_hang(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

int main(){
    int n,m,a[200][200];
    scanf("%d%d", &n, &m);
    nhap(a,n,m);
    in(a,n,m);
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        } 
        printf("%d ", sum);     
    }
    printf("\n");

    for (int i = 0; i < m; i++)
    {
        int sum1 = 0;
        for (int j = 0; j < n; j++)
        {
            sum1 += a[j][i];
        }  
        printf("%d ", sum1);     
    }
    
}