#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Số đối xứng chẵn

//Cho các số tự nhiên, bạn hãy liệt kê những số đối xứng và có toàn chữ số chẵn trong các số đã cho. 
//In ra danh sách những số đối xứng chẵn kèm theo tần suất giảm dần, nếu có 2 số có cùng tần suất thì số nào xuất hiện trước sẽ được in ra trước. Các bạn sử dụng struct như sau (C++) :

struct  word
{
    char number[100];
    int fre;
};

typedef struct word word;

word a[1000];
int n = 0;

int findPos(char c[]){
    for (int i = 0; i < n; i++)
    {
        if (strcmp(c,a[i].number) == 0)
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
        return strcmp(x->number,y->number);
    }
    else return y->fre - x->fre;
}

int sodoixungchan(char c[]){
    for (int i = 0; i < strlen(c)/2; i++)
    {
        if (c[i] % 2 != 0 || c[i] != c[strlen(c) - 1 - i])
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
        if (sodoixungchan(tmp))
        {
            if (Pos == -1)
        {
            strcpy(a[n].number, tmp);
            a[n].fre = 1;
            ++n;
        }
        else a[Pos].fre+=1;
        }    
    }
    qsort(a,n,sizeof(word),cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", a[i].number,a[i].fre);
    }
    
    return 0;
}