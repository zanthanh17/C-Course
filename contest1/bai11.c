#include <stdio.h>

/*Cho 3 cạnh a, b, c của một tam giác, nếu tam giác đã cho là tam giác đều thì in ra 1, tam giác cân thì in ra 2,
 tam giác vuông thì in ra 3, tam giác thường in ra 4, trường hợp tam giác nhập vào không hợp lệ thì in ra "INVALID"*/

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>0 && b > 0 && c > 0 && (a+b)>c && (a+c)>b && (b+c)>a){
        if(a == b && b == c){
            printf("1\n");
        }
        else if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
            printf("2\n");
        }
        else if((a*a + b*b == c*c) || (a*a +c*c == b*b) || (b*b + c*c == a*a)){
            printf("3\n");
        }
        else{
            printf("4\n");
        }       
    }
    else{
        printf("INVALID\n");
    }
    return 0;
}