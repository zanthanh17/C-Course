#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Liệt kê từ

//Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, 
//hãy liệt kê các từ khác nhau trong xâu S, đầu tiên hãy liệt kê các từ khác nhau theo thứ tự từ điển tăng dần, sau đó liệt kê các từ theo thứ tự xuất hiện trong xâu.

int comparator(const void *a, const void *b){
    char *x = (char*)a;
    char*y = (char*)b;
    return strcmp(x,y);
}
char a[10000][20];
char b[10000][20];

int main(){
    char c[100001];
    gets(c); 
    
    char* token = strtok(c, " ");
    int n = 0;
    while (token != NULL)
    {
        int check = 1;
        for (int j = 0; j < n; j++)
        {
            if(strcmp(token, a[j]) == 0){
                check = 0; break;
            }
        }
        if(check){
            strcpy(a[n], token);
            strcpy(b[n], token);
            n++;
        }    
        token = strtok(NULL, " ");
    }
    qsort(a, n, sizeof(a[0]), comparator);
    for (int i = 0; i < n; i++)
    {
        printf("%s ", a[i]);
        if(i != n - 1) printf(" ");
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s ", b[i]);
        if(i != n - 1) printf(" ");
    }
}
    

