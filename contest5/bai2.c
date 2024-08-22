#include <stdio.h>
#include <math.h>

//Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là tính trung bình cộng của các số là số nguyên tố trong dãy. Dữ liệu đảm bảo có ít nhất 1 phần tử là số nguyên tố trong dãy.
int a[100];

int nguyento( int n){
    for(int i = 2 ; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }         
    }
    return n>1;   
}
int main() { 
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int cnt = 0, sum = 0;
    for(int i = 0; i < n ; i++){
        if(nguyento(a[i])){
            ++cnt;
            sum += a[i];
        }
    }
    printf("%.3lf",(double)sum / cnt);
    return 0;
}

