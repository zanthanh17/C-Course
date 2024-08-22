#include <stdio.h>
#include <math.h>

//bai8: Đếm nguyên tố 1


void nhap(int a[][200], int n){
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

int snt(int n){
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }       
    }
    return n > 1;    
}
int main(){
    int n,a[200][200];
    scanf("%d", &n);
    nhap(a,n);
    //duong cheo chinh la a[i][i], duong cheo phu a[i][n-i-1]
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if(snt(a[i][i]))
        ++dem;
        if(snt(a[i][n-i-1]))
        ++dem;
        } 
    if (n % 2 == 1){
        if (snt(a[n/2][n/2]))
            --dem; 
    }           
        printf("%d ", dem);   
    }    