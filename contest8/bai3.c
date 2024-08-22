#include <stdio.h>
#include <math.h>

//bai3: Số lớn nhất, nhỏ nhất

void nhap(int a[][205], int n, int m){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }       
    }
}

void in(int a[][205], int n, int m){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }  
        printf("\n");     
    }
}

int main(){
    int n,m,a[205][205];
    scanf("%d%d", &n, &m);
    nhap(a,n,m);
    in(a,n,m);
    int min = 1e9,max = -1e9;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            min = fmin(min, a[i][j]);
            max = fmax(max, a[i][j]);
        }   
    }
    printf("%d\n", min);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] == min)
            printf("%d %d\n", i+1, j+1);
        }       
    }
    printf("%d\n", max);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] == max)
            printf("%d %d", i+1, j+1);
        }       
    }

}