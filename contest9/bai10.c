#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//bai4: Sắp xếp chữ số


//Cho số nguyên không âm N, hãy tiến hành sắp xếp các chữ số của N theo thứ tự tăng dần rồi in ra màn hình, 
//trong trường hợp số sau khi sắp xếp xuất hiện các chữ số 0 ở đầu thì ra không in những chữ số 0 vô nghĩa này.

int comparator(const void *a, const void *b){
    //ep 2 con tro void sang 2 con tro int
    char *x = (char*)a;
    char *y = (char*)b;
        return *x - *y;
}

int main(){
    char c[10005];
    scanf("%s", c);
    qsort(c,strlen(c),sizeof(char),comparator);
    int i = 0;
    while(i < strlen(c) - 1 && c[i] == '0'){
        ++i;
    }
    for (int j = i; j < strlen(c); j++)
    {
        printf("%c", c[j]);
    }
    
    return 0;
}