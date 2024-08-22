#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Bai6: Cặp số có tổng bằng K


//Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng bằng k.

int first(int a[], int left, int right, int x){
    int res = -1;
    while (left <= right)
    {
        int mid = (left + right)/2;
        if (a[mid] == x)
        {
            res = mid;
            right = mid - 1;
        }
        else if(a[mid] < x) {left = mid + 1; }  
        else right = mid - 1;    
    }
    return res;   
}

int last(int a[], int left, int right, int x){
    int res = -1;
    while (left <= right)
    {
        int mid = (left + right)/2;
        if (a[mid] == x)
        {
            res = mid;
            left = mid + 1;
        }
        else if(a[mid] < x) {left = mid + 1;}   
        else right = mid - 1;    
    }
    return res;   
}

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
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        int left = i + 1, right = n - 1;
        int p1 = first(a,left,right,k - a[i]);
        int p2 = last(a,left,right,k - a[i]);
        if(p1 != -1){
            ans += p2 - p1 + 1;
        }
    }  
    printf("%lld", ans);
    return 0;
}