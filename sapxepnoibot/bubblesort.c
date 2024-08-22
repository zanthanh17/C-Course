#include <stdio.h>
#include <math.h>

//Sắp xếp nổi bọt: bubble sort
//O(N^2)
//Đưa phần tử lớn nhất chưa được sắp xếp về cuối dãy

void bubblesort(int a[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        //duyệt từ chỉ số j = 0 -> n - i - 1
        for(int j = 0; j < n - i - 1; j++){
            if (a[j] > a[j+1])
            {
                //Hoán vị các số với nhau 
                int tmp = a[j]; a[j] = a[j + 1];a[j + 1] = tmp;
            }           
        }              
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
    bubblesort(a,n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }   
}

