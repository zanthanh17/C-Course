#include <stdio.h>

/*Năm mới sắp đến và bạn rất hào hứng muốn biết còn lại bao nhiêu phút trước Tết.
 Bạn biết rằng hiện tại đồng hồ hiển thị h giờ và m phút, trong đó 0≤hh <24 và 0≤mm <60. 
 Chúng tôi sử dụng định dạng thời gian 24 giờ! Nhiệm vụ của bạn là tìm số phút trước Tết.
Bạn biết rằng năm mới đến khi đồng hồ hiển thị 0 giờ và 0 phút.

Gợi ý : lấy số phút trong 1 ngày - số phút đã trôi qua tới h giờ, m phút*/

int main(){
    int h, m;
    scanf("%d %d", &h, &m);
    if(h <= 24 && m <= 60){
        int dem_m = 60 * 24 - (h * 60 + m);   
        printf("%d", dem_m);
    }
    else{
        printf("Khong hop le!");
    } 
    return 0;
}