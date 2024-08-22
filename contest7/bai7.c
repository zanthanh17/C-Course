#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Bai7: Cặp số có tổng nhỏ hơn K

//Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng nhỏ hơn k.

int find(int a[], int left, int right, int x){
    int res = -1;
    while (left <= right)
    {
        int mid = (left + right)/2;
        if (a[mid] < x)
        {
            res = mid;
            left = mid + 1;
        }
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
        int pos = find(a,left,right,k - a[i]);
        if(pos != -1){
            ans += pos - left + 1;
        }
    }  
    printf("%lld", ans);
    return 0;
}