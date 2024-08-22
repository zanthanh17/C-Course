#include <stdio.h>

int binarysearch(int a[], int n, int x){
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right)/2;
        if(a[mid] == x){
            return 1;
        }
        else if (a[mid] < x)
        left = mid + 1; //Tìm kiếm bên phải
        else
        right = mid - 1; // Tìm kiếm bên trái
    }
    return 0;
}

int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", binarysearch(a,n,x));
}