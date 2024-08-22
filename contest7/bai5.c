#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Bai5: Trộn 2 dãy

//Để sắp xếp tăng dần một mảng A gồm n phần tử a1, a2,..., an, thuật toán sắp xếp trộn (MergeSort) áp dụng chia đôi mảng A thành hai mảng B và C, sắp xếp B, C và sau đó trộn B và C cho ra mảng A tăng dần.


int comparator(const void *a, const void *b){
    //ep 2 con tro void sang 2 con tro int
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}

int main(){
    int n,k;
    scanf("%d%d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), comparator);
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if(a[i] - a[i - 1] > k)
            ++cnt;
    }  
    printf("%d", cnt);
    return 0;
}