#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Sắp xếp từ 2

//Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, 
//hãy sắp xếp các từ thuận nghịch khác nhau trong xâu theo thứ tự từ chiều dài tăng dần, nếu 2 từ thuận nghịch có cùng chiều dài thì từ nào xuất hiện trước sẽ được in ra trước.

int comparator1(const void *a, const void *b){
    char *x = (char*)a;
    char*y = (char*)b;
    if (strlen(x) != strlen(y))
    {
        return strlen(x) - strlen(y);
    }
    else return x - y;  
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
    char c[100001];
    gets(c); 
    char a[100][100];
    char* token = strtok(c, " ");
    int n = 0;
    while (token != NULL)
    {
        if (thuannghich(token))
        {
        strcpy(a[n], token);
        ++n;   
        }
        token = strtok(NULL, " ");
    }
    qsort(a, n, sizeof(a[0]), comparator1);
    for (int i = 0; i < n; i++)
    {
        printf("%s ", a[i]);
    }
}
    

