#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//bai10: Sắp xếp theo cot

void selectionsort(int a[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        int pos = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[pos])
            pos = j;
        }
        int tmp = a[i]; a[i] = a[pos]; a[pos] = tmp;
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    int a[200][200],b[200][200];
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            b[j][i] = a[i][j];
        }       
    }
    for (int i = 0; i < n; i++)
    {
        selectionsort(b[i], n);
    }  
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            printf("%d ", b[j][i]);
        }    
        printf("\n"); 
    }
    return 0;
}    