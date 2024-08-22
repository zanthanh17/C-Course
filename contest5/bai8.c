#include <stdio.h>
#include <math.h>

//Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị khác nhau trong mảng theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê 1 lần.
// Ở thời điểm hiện tại các bạn có thể duyệt trâu để giải bài này, sau này sẽ dùng cách tối ưu hơn.
int a[100];

int main() { 
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int min = abs(a[0] - a[1]);
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j<n;j++){
            if(abs(a[i] - a[j]) < min){
                min = abs(a[i] - a[j]);
            }           
        }
    }
    printf("%d", min);  
    return 0;
}

