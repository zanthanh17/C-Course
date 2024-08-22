#include <stdio.h>
#include <math.h>

//Sắp xếp chèn: insertion sort
//O(N^2)
//Ở mỗi bước sẽ chèn phần tử đang xét vào dãy các phần tử đã được sắp xếp trước đó

void insertionsort(int a[], int n){
    for (int i = 1; i < n; i++)
    {
        //Chèn phần tử a[i] vào cái đoạn [0, i - 1] sao cho vẫn tạo thành dãy tăng dần
        int pos = i - 1, value = a[i];    //pos = i - 1 là vị trí đứng trước a[i] 
        while (pos >= 0 && value < a[pos])
        {
            a[pos + 1] = a[pos];  //so sánh a[i] vs a[i-1], nhỏ hơn thì chèn vào vị trí i - 1
            --pos; //giảm pos để so sánh với vị trí tiếp theo pos = i - 2 .......
        }
        // cuối cung pos = -1 thì vòng while dừng nên pos + 1 để chèn vào vị trí a[0] đầu dãy
        a[pos + 1] = value; 
                      
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
    insertionsort(a,n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }   
}

