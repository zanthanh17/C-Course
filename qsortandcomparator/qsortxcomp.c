#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Ham qsort: void qsort(array, so_luong_phan_tu, kich_thuoc_theo_bits, int(*compar)(const void *, const void*))

//sap xep tong chu so tang dan, neu 2 so co cung tong thi so nho se xep truoc
int tong(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int comparator(const void *a, const void *b){
    //ep 2 con tro void sang 2 con tro int
    int *x = (int*)a;
    int *y = (int*)b;
    if(tong(*x) != tong(*y))
        return tong(*x) - tong(*y);
    else 
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
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }   
   
    return 0;
}