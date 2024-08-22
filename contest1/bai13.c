#include <stdio.h>

/*Cho biết điểm kiểm tra Tin học của 1 em học sinh (2 con điểm hệ số 1, 1 con điểm hệ số 2, 1 con điểm hệ số 3).
 In ra Kết quả học tập môn Tin học của em đó. Nếu điểm tổng kết >=8 đạt kết quả Giỏi, <8 và >=6,5 đạt kết quả Khá,
  <6,5 và >=5 đạt kết quả Trung Bình, <5 đạt kết quả Yếu.

Gợi ý : ĐTB = tổng (điểm * hệ số) / (tổng hệ số)*/

int main(){
    float a,b,c,d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    double DTB = (a + b + c*2 + d*3)/7;
    if(DTB >= 8){
        printf("Gioi\n");
    }
    else if(DTB < 8 && DTB >= 6.5){
        printf("Kha\n");
    }
    else if(DTB < 6.5 && DTB >= 5){
        printf("Trung binh\n");
    }
    else{
        printf("Yeu\n");
    }
     
    return 0;
}