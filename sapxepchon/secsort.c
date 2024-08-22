#include <stdio.h>
#include <math.h>

//Sắp xếp chọn: secletion sort
//O(N^2)
//Tư tưởng là đưa phần tử nhỏ nhất chưa đc sắp xếp về đầu dãy. Vd [ 2,5,7,8,1] -> [1,2,5,7,8] sắp xếp tăng dần

void seclectionsort(int a[], int n){
    // Bước i: Chọn phần tử nhỏ nhất chưa được sắp xếp và hoán vị với a[i]
    for (int i = 0; i < n - 1; i++)
    {
        //đi tìm phần tử nhỏ nhất chưa được sắp xếp, coi giá trị i là biến nhỏ nhất 
        int min_pos = i;
        for(int j = i + 1; j < n; j++){
            if (a[j] < a[min_pos])
            {
                min_pos = j;
            }           
        }
        //Hoán vị các số với nhau
        int tmp = a[i]; a[i] = a[min_pos];a[min_pos] = tmp;
    }    
}

int main() { 
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    seclectionsort(a,n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }   
}

