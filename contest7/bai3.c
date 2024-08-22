#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Bai3: Khoảng cách nhỏ nhất

//Cho mảng số nguyên A[] có N phần tử, tìm độ chênh lệch nhỏ nhất giữa 2 phần tử A[i] và A[j] trong mảng(i và j khác nhau).


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
    int Min = 1e9 + 5;
    for (int i = 1; i < n-1; i++)
    {
        Min = fmin(Min, a[i] - a[i - 1]);  
    }  
    printf("%d ", Min);
    return 0;
}