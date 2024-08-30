#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Từ xuất hiện nhiều nhất, ít nhất

//Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách. 
//Hãy tìm từ có số lần xuất hiện nhiều nhất và ít nhất trong xâu, nếu có nhiều từ có cùng số lần xuất hiện nhiều nhất hoặc ít nhất thì chọn từ có thứ tự từ điển lớn nhất làm kết quả.
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
            a[n].tanSuat = 1;
            ++n;
        } 
        else{
            a[Pos].tanSuat += 1;
        }
        token = strtok(NULL, " ");
    }
    qsort(a, n, sizeof(word), cmp);
    int maxTanSuat = 0, minTanSuat = 1e9;
    char res1[100], res2[100];
    for (int i = 0; i < n; i++)
    {
        if (a[i].tanSuat >= maxTanSuat)
        {
            maxTanSuat = a[i].tanSuat;
            strcpy(res1, a[i].data);
        }
        if (a[i].tanSuat <= minTanSuat)
        {
            minTanSuat = a[i].tanSuat;
            strcpy(res2, a[i].data);
        }
    }
    printf("%s %d\n", res1, maxTanSuat);
    printf("%s %d\n", res2, minTanSuat);
    
    
}
    

