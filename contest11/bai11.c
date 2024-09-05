#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Từ xuất hiện nhiều nhất

//Cho một đoạn văn gồm nhiều dòng, các từ trong đoạn văn được viết cách nhau một vài dấu cách. 
//Hãy tìm từ xuất hiện nhiều nhất trong đoạn văn, nếu có nhiều từ có cùng số lần xuất hiện thì bạn hãy in ra từ có thứ tự từ điển nhỏ nhất. Các bạn sử dụng struct như sau (C++) :

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

int main(){
    char tmp[100];
    while (scanf("%s", tmp) != -1)
    {
        int Pos = findPos(tmp);
        if (Pos == -1)
        {
            strcpy(a[n].data, tmp);
            a[n].fre = 1;
            ++n;
        }
        else a[Pos].fre++;
    }
    int fre_max = 0;
    char res[100];
    for (int i = 0; i < n; i++)
    {
        if (a[i].fre > fre_max)
        {
            fre_max = a[i].fre;
            strcpy(res,a[i].data);
        }
        else if (a[i].fre == fre_max)
        {
            if(strcmp(res, a[i].data) > 0){
                strcpy(res,a[i].data);
            }
        }    
    }
    printf("%s\n", res);
    return 0;
}