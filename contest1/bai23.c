#include <stdio.h>

/*Doremon muốn leo lên một cầu thang gồm n bước. Anh ta có thể leo 1 hoặc 2 bước mỗi lần di chuyển.
 Doremon muốn số lần di chuyển là bội số của một số nguyên m.
  Số lượng di chuyển tối thiểu làm cho anh ta leo lên đỉnh cầu thang thỏa mãn điều kiện của anh ta là gì?

Gợi ý : Tìm số bước di chuyển tối thiểu (n / 2 ?) để lên cầu thang và số bước di chuyển tối đa (n) cần lên cầu thang n bậc. 
Gọi lần lượt là x và y, bài toán quay về tìm số nhỏ nhất >= x và <= y chia hết cho m.
 Có thể dùng công thức (x + m - 1) / m * m để tìm nhanh kết quả rồi so sánh với y.*/

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    long long x , y = n;
    if(n % 2 == 0){
        x = n/2;
    }
    else{
        x = n/2 + 1;
    }
    int res = (x + m -1)/m * m;
    if( res <= y){
        printf ("%d", res);
    } 
     else {
        printf("-1");
     }
    return 0;
}