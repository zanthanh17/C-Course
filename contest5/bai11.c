#include <stdio.h>
#include <math.h>

//SỐ LỚN NHẤT, LỚN THỨ 2
//Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất và lớn thứ 2 trong mảng. Chú ý 2 giá trị này có thể giống nhau

int a[100000];

int main() { 
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int Max = 1e-9, Max2 = 1e-9;
    for(int i = 0; i < n; i++){
        if(a[i] > Max ){
            Max2 = Max;
            Max = a[i];            
        }else if(a[i] > Max2){
            Max2 = a[i];
        }
    }
    printf("%d %d",Max,Max2);  
    return 0;
}

