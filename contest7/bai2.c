#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Bai2: Sắp xếp theo trị tuyệt đối

//Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo thứ tự giá trị tuyệt đối tăng dần.

//Nếu có 2 số có cùng giá trị tuyệt đối thì số nào xuất hiện trước sẽ được in ra trước

struct X
{
    int data;
    int index;
};

typedef struct X X;

int comparator(const void *a, const void *b){
    //ep 2 con tro void sang 2 con tro int
    X *x = (X*)a;
    X *y = (X*)b;
    int data1 = x -> data, data2 = y ->data;
    int index1 = x ->index, index2 = y ->index;
    if(abs(data1) != abs(data2)){
        return abs(data1) - abs(data2);
    }
    return index1 - index2;
}

int main(){
    int n;
    scanf("%d", &n);
    X a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i].data);
        a[i].index = i;
    }
    qsort(a, n, sizeof(int), comparator);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i].data);
    }  
      
    return 0;
}