#include <stdio.h>
#include <math.h>

//bai9: Đếm nguyên tố 2


void nhap(int a[][200], int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }       
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
    int n,a[n][n];
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
        if (snt(a[i][i]) == snt(a[i][n-i-1]))
            --dem;     
    }      
        printf("%d ", dem);   
    }    