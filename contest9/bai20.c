#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Sắp xếp ký tự

//Cho xâu kí tự S, tiến hành sắp xếp kí tự trong xâu S theo thứ tự tăng dần, giảm dần theo thứ tự từ điển rồi in ra màn hình.

int comparator(const void *a, const void *b){
    //ep 2 con tro void sang 2 con tro int
    char *x = (char*)a;
    char *y = (char*)b;
    return *x - *y;
}

int comparator1(const void *a, const void *b){
    //ep 2 con tro void sang 2 con tro int
    char *x = (char*)a;
    char *y = (char*)b;
    return *y - *x;
}

int main(){
    char c[10005];
    gets(c);
    qsort(c,strlen(c),sizeof(char),comparator);
    printf("%s\n",c);
    qsort(c,strlen(c),sizeof(char),comparator1);
    printf("%s\n",c);
}
