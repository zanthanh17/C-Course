#include <stdio.h>
#include <math.h>

//bai5: Hoán vị 2 cot


void nhap(int a[][205], int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }       
    }
}

void in(int a[][500], int n, int m){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }  
        printf("\n");     
    }
}

int main(){
    int n,a[205][205],u,v;
    scanf("%d", &n);
    nhap(a,n);
    scanf("%d%d", &u, &v);
    for (int i = 0; i < n; i++)
    //duong cheo chinh la a[i][i], duong cheo phu a[i][n-i-1]
    {
            int tmp = a[i][u-1];
            a[i][u-1] = a[i][v-1];
            a[i][v-1] = tmp;    
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }    
        printf("\n");   
    }    
}