#include <stdio.h>
#include <math.h>

/*Tính tổng S(n) = 1 + 2 + 3 + ... + n. Công thức tổng quát của dãy : n * (n + 1) / 2.
 Gợi ý : Tạo 1 biến kết quả gọi là tong và khởi tạo bằng 0(tránh giá trị rác), sau đó sinh ra 1 vòng lặp chạy từ 1 tới n,
  mỗi vòng lặp thì cộng biến i của vòng lặp vào biến tong. In ra biến tong SAU KHI VÒNG LẶP KẾT THÚC*/

int main(){
    long long n;
    scanf("%lld", &n);
    long long Tong = 0;
    for (int i = 0; i <= n; i++)
    {
        Tong = n*(n+1)/2;
    }
    printf("%lld", Tong);
    
    return 0;

}