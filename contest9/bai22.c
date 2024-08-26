#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Sắp xếp từ theo chiều dài


//Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách.

//Thực hiện sắp xếp các từ trong xâu theo thứ tự chiều dài tăng dần, nếu 2 từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ được xếp trước.

int comparator(const void *a, const void *b){
    //ep 2 con tro void sang 2 con tro int
    char *x = (char*)a;
    char *y = (char*)b;
    if (strlen(x) != strlen(y))
    {
        return strlen(x) - strlen(y);
    }
    else strcmp(x,y);
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
}
    
   
