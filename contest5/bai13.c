#include <stdio.h>
#include <math.h>

//XÓA PHẦN TỬ KHỎI MẢNG
//Cho mảng số nguyên A[] gồm N phần tử và số nguyên X, nhiệm vụ của bạn là tìm kiếm xem X có xuất hiện trong mảng hay không, 
//nếu X xuất hiện trong mảng thì thực hiện xóa vị trí xuất hiện đầu tiên của X trong mảng, ngược lại in ra "NOT FOUND" nếu X không xuất hiện.

int main() { 
    int n,x;  
    scanf("%d %d",&n,&x);
    int a[n];
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    } 
    int k = -1; //tìm chỉ số đầu tiên của x trong mảng
    for(int i = 0; i < n ; i++){
        if(a[i]==x){
        k = i;
        break;
        }
    }
    if(k == -1){
        printf("NOT FOUND\n");
    }else{
        //xóa phần tử ở vị trí k
        for(int i = k;i < n-1;i++){
            a[i] = a[i+1];
        }
        --n;
        for(int i = 0; i < n ; i++){
        printf("%d ", a[i]);
        }
    } 
}

