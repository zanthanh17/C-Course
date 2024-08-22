#include <stdio.h>
#include <math.h>

//Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng của bạn có bao nhiêu số có cùng giá trị nhỏ nhất.
// Ví dụ mảng A = {1, 2, 1, 3, 5} thì số nhỏ nhất trong mảng là 1 xuất hiện 2 lần.
int a[100];

int main() { 
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int min = 1e9, cnt = 0;
    for(int i = 0; i < n ; i++){
        if(a[i] < min){            
            min = a[i];
        }
    }
    for(int i = 0; i < n ; i++){
        if(a[i] == min){
            ++cnt;
        }
    }
    printf("%d",cnt);
    return 0;
}

