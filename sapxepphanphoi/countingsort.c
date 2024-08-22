#include <stdio.h>
#include <math.h>

//Sắp xếp đếm phân phối: counting sort
//O(N + K)
//Đếm xem mỗi giá trị xuất hiện bao nhiêu lần, sau đó in từ bé đến lớn
//Điều kiện: Khai báo được 1 mảng đếm có cỡ là K + 1, K: phần tử lớn nhất trong mảng
//các phần tử trong mảng không được là số âm

    int cnt[10000001] = {0};

void countingsort(int a[], int n){
    int K = -1e9;
    for (int i = 0; i < n; i++)
    {
        K = fmax(K, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }    
    for (int i = 0; i < K; i++)
    {
        for (int j = 0; j < cnt[i]; j++)
        {
            printf("%d", i);
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
    countingsort(a,n);
    return 0; 
}

