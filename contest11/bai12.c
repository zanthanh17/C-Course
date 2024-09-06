#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Sắp xếp từ thuận nghịch

//Cho một đoạn văn gồm nhiều dòng, các từ trong đoạn văn được viết cách nhau một vài dấu cách.
// Hãy sắp xếp các từ Thuận Nghịch trong đoạn văn theo thứ tự tần suất giảm dần, nếu 2 từ có cùng tần suất thì sắp theo thứ tự từ điển tăng dần. Bài này các bạn sử dụng struct như sau :


struct  word
{
    char data[100];
    int fre;
};

typedef struct word word;

word a[1000];
int n = 0;

int findPos(char c[]){
    for (int i = 0; i < n; i++)
    {
        if (strcmp(c,a[i].data) == 0)
        {
            return i;
        }
    }
    return -1;
}

int cmp(const void *a, const void *b){
    word *x = (word*)a;
    word *y = (word*)b;
    if (x->fre == y->fre)
    {
        return strcmp(x->data,y->data);
    }
    else return y->fre - x->fre;
}

int kiutt(char c[]){
    for (int i = 0; i < strlen(c)/2; i++)
    {
        if (c[i] != c[strlen(c) - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    char tmp[10001];
    while (scanf("%s", tmp) != -1)
    {
        int Pos = findPos(tmp);
        if (kiutt(tmp))
        {
            if (Pos == -1)
        {
            strcpy(a[n].data, tmp);
            a[n].fre = 1;
            ++n;
        }
        else a[Pos].fre+=1;
        }    
    }
    qsort(a,n,sizeof(word),cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", a[i].data,a[i].fre);
    }
    
    return 0;
}