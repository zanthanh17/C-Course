#include <stdio.h>
#include <math.h>

//bai4: In ma tran theo mau

void nhap(int a[][500], int n){
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
    int n,a[500][500];
    scanf("%d", &n);
    nhap(a,n);
    printf("Pattern1: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            printf("%d ", a[j][i]);
        }       
        printf("\n"); 
    }
    printf("Pattern2: \n");
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = n-1; j >= 0; j--)
        {
            
            printf("%d ", a[i][j]);
        }       
        printf("\n"); 
    }
    printf("Pattern3: \n");
    for (int j = n - 1; j >= 0; j--)
    {
        for (int i = 0; i < n; i++)
        {
            
            printf("%d ", a[i][j]);
        }       
        printf("\n"); 
    }
    printf("Pattern4: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            
            printf("%d ", a[i][j]);
        }       
        printf("\n"); 
    }
}