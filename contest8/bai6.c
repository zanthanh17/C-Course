#include <stdio.h>
#include <math.h>

//bai5: Hoán vị 2 hang


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
    //duong cheo chinh la a[i][i], duong cheo phu a[i][n-i-1]
        for (int j = 0; j < n; j++)
        {
            int tmp = a[u-1][j];
            a[u-1][j] = a[v-1][j];
             a[v-1][j] = tmp;       
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