#include <stdio.h>
#include <math.h>

//CHÈN PHẦN TỬ VÀO MẢNG
//Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là chèn phần tử X vào vị trí K trong mảng sau đó in ra mảng. Lưu ý K bắt đầu từ 1

int main() { 
    int n,x,k;   //x là phần tử, k là vị trí
    scanf("%d %d %d",&n,&x,&k);
    int a[n];
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    } 
    --k; //vd k ở vị trí 3 thì trong mảng là a[0]- a[2] nên giảm k để k = 2
    for(int i = n; i > k ; i--){
        a[i] = a[i - 1]; //dịch số cuối cùng tromg mảng đến k sang phải 1 đơn vị 
    }
    a[k] = x; //chèn x vào vị trí k
    ++n; //tăng n vì mảng giờ tăng 1 đơn vị
    for(int i = 0;i < n;i++){
        printf("%d ", a[i]);
        }
}

