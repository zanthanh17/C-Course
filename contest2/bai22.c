#include <stdio.h>
#include <math.h>

/*Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.*/

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                    printf("*");
        }
        printf("\n");      
    }  
    printf("\n");    

    for (int i = n; i >= 1 ; i--){
        for (int j = 1; j <= i; j++){
                printf("*");
        }
        printf("\n");      
    }    
    printf("\n");

    for (int i = 1; i <= n ; i++){
        for (int j = 1; j <= n; j++){
            if(j <= n - i){
                printf(" ");
            }
            else printf("*");
        }
        printf("\n");      
    } 
    printf("\n");

    for (int i = 1; i <= n ; i++){
        for (int j = 1; j <= n ; j++){
            if (j >= i)
            {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");      
    } 
    printf("\n");

    for (int i = 1; i <= n ; i++){
        for (int j = 1; j <= i ; j++){
            if (j == 1 || i == j || i == n || i == 1)
            {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");      
    } 
    printf("\n");



    return 0;

}