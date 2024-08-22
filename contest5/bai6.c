#include <stdio.h>
#include <math.h>

//Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng A[] tồn tại bao nhiêu cặp số A[i] , A[j] với i khác j sao cho tổng của 2 phần tử này bằng số K cho trước.
int a[100];

int main() { 
    int n,K;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d",&K);
    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j<n;j++){
            if(a[i]+a[j]==K){            
                ++cnt;
            } 
        }
    }
    printf("%d", cnt);  
    return 0;
}

