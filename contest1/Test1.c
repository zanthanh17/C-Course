#include <stdio.h>
#include <math.h>
/*Cho phương trình ax^2 + bx + c = 0. Hãy giải phương trình bậc 2 trên.

Nếu phương trình vô nghiệm thì in ra "VO NGHIEM"

Nếu phương trình vô số nghiệm thì in ra "VO SO NGHIEM"

Nếu phương trình có 1 nghiệm hoặc nghiệm kép thì in ra 1 nghiệm duy nhất đó, trường hợp có 2 nghiệm thì in ra nghiệm nhỏ hơn trước.
 Các nghiệm được in ra với 2 số sau dấu phẩy.

Chú ý chia ra 2 trường hợp a = 0, a !=0*/

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a == 0){ 
        if(b == 0 && c == 0){
        printf("VO SO NGHIEM");
        }
        else if (b == 0 && c != 0)
        {
            printf("VO NGHIEM");
        }
        else{
            double x = (double)-c / b;
            printf("%.2lf", x);
        }
    }
    else{
        double delta_t = b*b - 4*a*c;
        if(delta_t < 0){
            printf("VO NGHIEM");
        }
        else if(delta_t == 0){
            double x = (double) -b/(2*a);
            printf("%.2lf", x);
        }
        else if(delta_t > 0){
            double x1 = (double) (-b + sqrt(delta_t) ) / (2*a);
            double x2 = (double) (-b - sqrt(delta_t) ) / (2*a);
            printf("%.2lf %.2lf", x2, x1);
        }
    } 
    return 0;
}