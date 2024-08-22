#include <stdio.h>

/*Cho biết tháng và năm, hãy in ra số ngày tương ứng có trong tháng đó. Chú ý tháng 2 của năm nhuận có 29 ngày.
 Năm nhuận là năm chia hết cho 400 hoặc (chia hết cho 4 và không chia hết cho 100)*/

int main(){
    int t,n;
    scanf("%d %d", &t, &n);
    if(t > 0 && t < 13 && n > 0){
        if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12){
            printf("31\n");
        }
        else if(t == 4 || t == 6 || t == 9 || t == 11){
            printf("30\n");
        }
        else{ 
            if(t == 2 && (n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)){
            printf("29\n");
            }
            else{
                printf("28\n");
                }
        }
    }
    else{
        printf("INVALID\n");
    }
    return 0;
}