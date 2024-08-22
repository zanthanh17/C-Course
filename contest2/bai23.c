#include <stdio.h>
#include <math.h>

/*Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.*/

int main(){
    int n;
    scanf("%d", &n);
    int dem = 1;

    for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                    printf("%d ", dem);  
                    ++dem;
        }
        printf("\n");      
    }  
    printf("\n");    

    for (int i = 1; i <= n ; i++){
        int ktao = i;
        for (int j = 1; j <= n; j++){
                printf("%d ", ktao);  
                    ++ktao;
        }
        printf("\n");      
    }    
    printf("\n");

    for (int i = 1; i <= n ; i++){
        for (int j = 1; j <= n; j++){
            if(j <= n - i){
                printf("~");
            }
            else printf("%d", i);
        }
        printf("\n");      
    } 
    printf("\n");

    for (int i = 1; i <= n ; i++){
        int ktao_2 = i;
        int cnt = n;
        for (int j = 1; j <= i ; j++){
            printf("%d ", ktao_2);
            --cnt;
            ktao_2 += cnt;
        }
        printf("\n");      
    } 
    printf("\n");

    return 0;

}