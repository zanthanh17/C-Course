#include <stdio.h>
#include <math.h>

/*Nhập vào giá trị của n không quá 10^6, tính tổng các số nguyên dương không vượt quá n, chia hết cho 3.

Gợi ý : Tạo 1 biến kết quả gọi là tong và khởi tạo bằng 0(tránh giá trị rác), sau đó sinh ra 1 vòng lặp chạy từ 1 tới n,
 mỗi vòng lặp thì kiểm tra xem i chia hết cho 3 thì cộng biến i của vòng lặp vào biến tong. In ra biến tong SAU KHI VÒNG LẶP KẾT THÚC*/

int main(){
    int n;
    scanf("%d", &n);
    long long Tong = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            Tong += i ;
        }
    }
    printf("%lld", Tong);
    return 0;

}