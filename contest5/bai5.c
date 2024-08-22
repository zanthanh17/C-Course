#include <stdio.h>
#include <math.h>

//Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là in ra các phần tử là số chẵn ở chỉ số chẵn, nếu mảng không tồn tại phần tử như vậy thì in ra "NONE".
int a[100];

int main() { 
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int check = 0;
    for(int i = 0; i < n ; i++){
        if(i % 2 == 0 && a[i] % 2 == 0){            
            printf("%d ",a[i]);
            check = 1;
        }   
    } 
    if(check == 0){
        printf("NONE");
    }  
    return 0;
}

