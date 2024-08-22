#include <stdio.h>
#include <math.h>

//bai5: Hoán vị đường chéo


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
    int n,a[205][205];
    scanf("%d", &n);
    nhap(a,n);
    for (int i = 0; i < n; i++)
    //duong cheo chinh la a[i][i], duong cheo phu a[i][n-i-1]
    {
        int tmp = a[i][i];
        a[i][i] = a[i][n-i-1];
        a[i][n-i-1] = tmp;
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