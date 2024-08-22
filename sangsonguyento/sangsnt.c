#include <stdio.h>
#include <math.h>

//sàng các số nguyên tố từ 0 -> n 

int n = 10000000;
int prime[10000001];

void sangsnt(){
    // B1: Gán
    for(int i = 0; i <= n; i++){
        prime[i] = 1; //coi tất cả số nguyên tố từ  0 -> n là snt
    }
    //B2: Sàng số nguyên tố
    prime[0] = prime[1] = 0; //loại bỏ 0,1 k phải snt
    for (int i = 2; i <= sqrt(n); i++) 
    {
        // nếu i là số nguyên tố => loại bỏ các bội của i <= n
        if (prime[i] == 1)
        {
            // Duyệt các bội của i: i * i 
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }           
        }       
    }
}
int main() { 
    sangsnt();
    for (int i = 0; i <= 100; i++)
    {
        if (prime[i])
        {
            printf("%d ", i);
        }            
    }
}
    

