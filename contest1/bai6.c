#include <stdio.h>
#include <math.h>

/*Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương(lấy độ chính xác với 4 chữ số) của 2 số đó.
 Bài này có thể bị sai do 2 nguyên nhân : 1. Khi tính tích bị tràn số, 2. Độ chính xác của thương.*/

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    long long Tong = a + b;
    long long Hieu = a - b;
    long long Tich = 1ll*a * 1ll*b;
    printf("%lld\n%lld\n%lld\n", Tong , Hieu, Tich);
    if( b == 0){
        printf("INVALID\n");
    }
    else {
        double Thuong =(double)a / b;
        printf("%.4lf\n", Thuong);
    }
    return 0;
}