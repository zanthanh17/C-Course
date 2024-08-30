#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//Kiểm tra xâu con


//Cho 2 xâu S và T chỉ bao gồm các chữ cái in hoa, in thường và dấu cách. Hãy kiểm tra xem xâu T có phải là xâu con của xâu S hay không?
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
    char s[100001];
    gets(c); 
    gets(s); 
    if (strstr(c,s) != NULL)
    {
        printf("YES");
    }
    else printf("NO");
}
    
    

