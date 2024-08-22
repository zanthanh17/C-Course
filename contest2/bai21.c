#include <stdio.h>
#include <math.h>

/*Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.*/

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");      
    }      
    printf("\n");

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");      
    }  
    printf("\n");    

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf("#");
        }
        printf("\n");      
    }    
    printf("\n");

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == 1 || i == n || j == 1 || j == n )
                printf("%d", i);
            else
                printf(" ");
        }
        printf("\n");      
    }      

    return 0;

}