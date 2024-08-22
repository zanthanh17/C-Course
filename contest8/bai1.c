#include <stdio.h>
#include <math.h>

//bai1: Liệt kê các số nguyên tố trong mảng 2 chiều

void nhap(int a[][500], int n, int m){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
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

int snt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

int main(){
    int n,m,a[500][500];
    scanf("%d%d", &n, &m);
    nhap(a,n,m);
    in(a,n,m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(snt(a[i][j]))
                printf("%d ", a[i][j]);
        }      
    }
}