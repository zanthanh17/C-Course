#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Sắp xếp các từ


//Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện sắp xếp các từ trong xâu theo thứ tự từ điển tăng dần và giảm dần.

int comparator(const void *a, const void *b){
    //ep 2 con tro void sang 2 con tro int
    char *x = (char*)a;
    char *y = (char*)b;
    return strcmp(x,y);
}

int comparator1(const void *a, const void *b){
    //ep 2 con tro void sang 2 con tro int
    char *x = (char*)a;
    char *y = (char*)b;
    return strcmp(y,x);
}

int main(){
    char c[10005];
    gets(c);
    char* token = strtok(c, " ");
    char a[100][100];
    int n = 0;
    while (token != NULL)
    {
        strcpy(a[n], token);
        ++n;
        token = strtok(NULL, " ");
    }
    qsort(a, n, sizeof(a[0]), comparator);
    for (int i = 0; i < n; i++)
    {
        printf("%s ", a[i]);
    }
    printf("\n");
    qsort(a, n, sizeof(a[0]), comparator1);
    for (int i = 0; i < n; i++)
    {
        printf("%s ", a[i]);
    }
    
   
}
