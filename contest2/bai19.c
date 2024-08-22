#include <stdio.h>
#include <math.h>

/*28techland là vùng đất mà cư dân cực kì thích uống bia, vì thế để tăng số lượng bia bán ra các cửa hàng bia ở đây đưa ra khuyến mại như sau :
 Cứ 3 vỏ chai bia sẽ được đổi một chai bia mới. Biết rằng ở 28techland, mỗi chai bia có giá 28 xu, nhiệm vụ của bạn là xác định với N xu cho trước,
  bạn có thể mua được tối đa bao nhiêu chai bia tính cả việc đổi thưởng bằng vỏ chai?

Gợi ý : Bước 1 : Tính số lượng chai bia mua bằng tiền (n / 28).
 Sau đó làm 1 vòng lặp while với điều kiện lặp là số lượng vỏ chai mình có >= 3,
  bên trong vòng lặp thì tính số lượng chia bia đổi được và cập nhật vỏ chai.*/

int main(){
    long long n;
    scanf("%lld", &n);
    int sl_bia = n / 28;
    int vo_bia = sl_bia;
    while (vo_bia >= 3)  
    {
        int bia = vo_bia / 3;
        sl_bia += bia;
        vo_bia = vo_bia % 3 + bia;
    }
    printf("%d", sl_bia);
    return 0;

}