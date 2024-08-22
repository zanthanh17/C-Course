#include <stdio.h>


//Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là đếm xem trong mảng có bao nhiêu số chẵn, bao nhiêu số lẻ, tổng các phần tử là số chẵn, tổng các phần tử là số lẻ.
int a[100];

int main() { 
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int chan = 0, le = 0 , tongchan = 0, tongle = 0;
    for(int i = 0; i < n ; i++){
        if(a[i]% 2 == 0){
            ++chan;
            tongchan += a[i];
        }
        else {
           ++le;
           tongle += a[i];
        }
    }
    printf("%d\n%d\n%d\n%d\n",chan,le,tongchan,tongle);
    return 0;
}

