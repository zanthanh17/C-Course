#include <stdio.h>
#include <math.h>

//MẢNG ĐỐI XỨNG
//Cho mảng số nguyên A[] gồm N phần tử, kiểm tra xem mảng có đối xứng hay không?

int check(int a[], int n){
    int l = 0, r = n - 1;
    while(l <= r){
        if(a[l] != a[r]){
            return 0;
            ++l; --r;
        }
    }
    return 1; 
}

int main() { 
    int n;  
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n ; i++) scanf("%d", &a[i]);
        if(check(a,n)) printf("YES\n");     
    else printf("NO\n");   
    
}

