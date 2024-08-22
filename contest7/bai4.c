#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//bai4: Tìm kiếm nhị phân biến đổi

//Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần. Hãy viết các hàm sau với độ phức tạp O(logN) :

//1.Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng, nếu không tồn tại X in ra -1.
int binarysearch1(int a[], int n, int x){
    int res = -1, left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right)/2;
        if(a[mid] == x){
            res = mid;
            right = mid - 1;
        }
        else if (a[mid] < x)
        left = mid + 1; //Tìm kiếm bên phải
        else
        right = mid - 1; // Tìm kiếm bên trái
    }
    return res;
}
//2.Tìm vị trí xuất hiện cuối cùng của phần tử X trong mảng, nếu không tồn tại X in ra -1.
int binarysearch2(int a[], int n, int x){
    int res = -1, left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right)/2;
        if(a[mid] == x){
            res = mid;
            left = mid + 1;
        }
        else if (a[mid] < x)
        left = mid + 1; //Tìm kiếm bên phải
        else
        right = mid - 1; // Tìm kiếm bên trái
    }
    return res;
}
//3.Tìm vị trí xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1.
int binarysearch3(int a[], int n, int x){
    int res = -1, left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right)/2;
        if(a[mid] >= x){
            res = mid;
            right = mid - 1;
        }
        else
        left = mid + 1; //Tìm kiếm bên phải
    }
    return res;
}
//4.Tìm vị trí xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1.
int binarysearch4(int a[], int n, int x){
    int res = -1, left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right)/2;
        if(a[mid] > x){
            res = mid;
            right = mid - 1;
        }
        else
        left = mid + 1; //Tìm kiếm bên phải
    }
    return res;
}
//5.Tìm số lần xuất hiện của phần tử X trong mảng sử dụng kết quả của hàm 1 và 2.

int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d\n%d\n%d\n%d\n", binarysearch1(a,n,x), binarysearch2(a,n,x),binarysearch3(a,n,x),binarysearch4(a,n,x));
    if(binarysearch1(a,n,x) != -1){
        printf("%d", binarysearch2(a,n,x) - binarysearch1(a,n,x) + 1);
    }
    else 
        printf("0");
    return 0;
}