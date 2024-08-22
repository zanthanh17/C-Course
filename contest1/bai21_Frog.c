#include <stdio.h>

/*Một con ếch hiện đang ở điểm 0 trên trục tọa độ Ox. 
Nó nhảy theo thuật toán sau: bước nhảy thứ nhất là a đơn vị về bên phải, bước nhảy thứ hai là b đơn vị về bên trái,
bước nhảy thứ ba là a đơn vị bên phải, bước nhảy thứ tư là b đơn vị bên trái, v.v. .Nếu con ếch đã nhảy một số lần chẵn (trước lần nhảy hiện tại),
nó nhảy từ vị trí hiện tại x sang vị trí x + a, mặt khác, nó nhảy từ vị trí hiện tại x sang vị trí x − b. 
Nhiệm vụ của bạn là tính toán vị trí của ếch sau k bước nhảy

Gợi ý : Tìm số bước nhảy của Frog sang bên trái và bên phải, gọi là t và p, 
khi đó vị trí của Frog sẽ là tổng khoảng cách nhảy sang phải - tổng khoảng cách nhảy sang trái.*/

int main(){
    int a,b,k;
    scanf("%d %d %d", &a, &b, &k);
    long long trai,phai;
    if(k % 2 == 0){
        phai = trai = k/2; 
    }
    else{
       trai += k/2;
       phai = trai + 1;
    }
     printf ("%lld", 1ll * phai * a - 1ll * trai * b);
    return 0;
}