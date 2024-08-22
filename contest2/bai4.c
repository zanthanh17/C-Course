#include <stdio.h>
#include <math.h>

/*Tính tổng : S=1+1/2+1/3+1/4+….+1/n.

Gợi ý : Tạo 1 biến kết quả gọi là tong và khởi tạo bằng 0(tránh giá trị rác), sau đó sinh ra 1 vòng lặp chạy từ 1 tới n,
 mỗi vòng lặp thì cộng giá trị 1 / i của vòng lặp vào biến tong. In ra biến tong SAU KHI VÒNG LẶP KẾT THÚC*/

int main(){
    int n;
    scanf("%d", &n);
    double Tong = 0;
    for (int i = 1; i <= n; i++)
    {
        Tong += (double) 1/i ;
    }
    printf("%.3lf", Tong);
    return 0;

}