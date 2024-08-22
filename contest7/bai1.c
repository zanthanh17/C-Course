#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Bai1: Các số khác nhau trong mảng

//Cho mảng số nguyên gồm N phần tử. Hãy đếm xem mảng có bao nhiêu phần tử riêng biệt

int comparator(const void *a, const void *b){
    //ep 2 con tro void sang 2 con tro int
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), comparator);
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if(a[i] != a[i - 1])
        ++cnt;
    }  
    printf("%d", cnt);   
    return 0;
}