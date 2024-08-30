#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Tần suất từ

//Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, 
//hãy đếm xem mỗi từ trong xâu xuất hiện bao nhiêu lần, đầu tiên hãy liệt kê các từ trong xâu kèm theo tần suất của mỗi từ theo thứ tự từ điển, sau đó liệt kê các từ trong xâu theo thứ tự xuất hiện.

struct  word
{
    char data[100];
    int tanSuat;
};

typedef struct word word;

int cmp(const void *a, const void *b){
    word *x = (word*)a;
    word *y = (word*)b;
    return strcmp(x->data, y->data);
 }

word a[100000] ,b[100000];
int n = 0;
int findPos(char c[]){
    for (int i = 0; i < n; i++)
    {
        if(strcmp(c, a[i].data) == 0)
        return i;
    }
    return -1;
}


int main(){
    char c[100001];
    gets(c); 
    char* token = strtok(c, " ");
    while (token != NULL)
    {
        int Pos = findPos(token);
        if(Pos == -1){
            strcpy(a[n].data, token);
            strcpy(b[n].data, token);
            a[n].tanSuat = 1;
            b[n].tanSuat = 1;
            ++n;
        } 
        else{
            a[Pos].tanSuat += 1;
            b[Pos].tanSuat += 1;
        }
        token = strtok(NULL, " ");
    }
    qsort(a, n, sizeof(word), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", a[i].data, a[i].tanSuat);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", b[i].data, b[i].tanSuat);
    }
}
    

