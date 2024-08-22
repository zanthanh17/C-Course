#include <stdio.h>

// tìm chỉ số đầu tiên của phần tử x trong mảng

int firstsearch(int a[], int n, int x){
    int res = -1, left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right)/2;
        if(a[mid] == x){
            res = mid;  
            right = mid - 1;  //timf ở bên trái xem còn x nào k
        }
        else if (a[mid] < x)
        left = mid + 1; //Tìm kiếm bên phải
        else
        right = mid - 1; // Tìm kiếm bên trái
    }
    return res;
}

// tìm chỉ số cuối cùng của phần tử x trong mảng
int lastsearch(int a[], int n, int x){
    int res = -1, left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right)/2;
        if(a[mid] == x){
            res = mid;  
            left = mid + 1;  //timf ở bên phải xem còn x nào k
        }
        else if (a[mid] < x)
        left = mid + 1; //Tìm kiếm bên phải
        else
        right = mid - 1; // Tìm kiếm bên trái
    }
    return res;
}

int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", firstsearch(a,n,x));
}