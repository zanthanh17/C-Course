#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Các từ thuận nghịch



//Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách.

//Hãy tách ra các từ thuận nghịch trong xâu và sắp xếp theo thứ tự từ điển tăng dần.

int comparator(const void *a, const void *b){
    //ep 2 con tro void sang 2 con tro int
    char *x = (char*)a;
    char *y = (char*)b;
    return strcmp(x,y);
}
int thuannghich(char c[]){
    int l = 0, r = strlen(c) - 1;
    while ((l <= r))
    {
        if(c[l] != c[r]){
            return 0;
        }
        ++l; --r;
    }
    return 1;  
}
int main(){
    char c[10005];
    fgets(c,10005,stdin);
    c[strlen(c) - 1] = '\0'; 
    char* token = strtok(c, " ");
    char a[1000][50];
    int n = 0;
    int cnt = 0;
    while (token != NULL)
    {
        if(thuannghich(token)){
        strcpy(a[n], token);
        ++n;
        }
        token = strtok(NULL, " ");
    }
    qsort(a,n,sizeof(a[0]),comparator);
    for (int i = 0; i < n; i++)
    {
        printf("%s ", a[i]);
    }   
}
    
   
