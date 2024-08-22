#include <stdio.h>
#include <math.h>

//Cho mảng số nguyên A[] gồm N phần tử và số nguyên X , hãy đếm xem trong mảng có bao nhiêu số lớn hơn X và bao nhiêu số nhỏ hơn X.
int a[100];

int main() { 
    int n,X;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d",&X);
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < n ; i++){
        if(a[i] < X){            
            ++cnt1;
        }
        else if(a[i] > X){
            ++cnt2;
        }
    }
    printf("%d\n",cnt1);
    printf("%d",cnt2);
    return 0;
}

