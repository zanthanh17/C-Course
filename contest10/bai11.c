#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Sắp xếp từ 1

//Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, 
//đầu tiên hãy sắp xếp các từ trong xâu theo thứ tự từ điển tăng dần, sau đó sắp xếp các từ trong xâu theo thứ tự chiều dài tăng dần, 
//trong trường hợp có nhiều từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ in ra trước.

int comparator1(const void *a, const void *b){
    char *x = (char*)a;
    char*y = (char*)b;
    return strcmp(x,y);
}

int comparator2(const void *a, const void *b){
    char *x = (char*)a;
    char*y = (char*)b;
    if(strlen(x) != strlen(y)){
        return strlen(x) - strlen(y);
    }
    else return strcmp(x,y);
}

int main(){
    char c[100001];
    gets(c); 
    char a[100][100];
    char* token = strtok(c, " ");
    int n = 0;
    while (token != NULL)
    {
        strcpy(a[n], token);
        ++n;   
        token = strtok(NULL, " ");
    }
    qsort(a, n, sizeof(a[0]), comparator1);
    for (int i = 0; i < n; i++)
    {
        printf("%s ", a[i]);
    }
    qsort(a, n, sizeof(a[0]), comparator2);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s ", a[i]);
    }
}
    

