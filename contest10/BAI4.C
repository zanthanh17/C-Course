#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//bai4: Ký tự xuất hiện nhiều nhất


//Cho một xâu kí tự, hãy tìm kí tự có số lần xuất hiện ít nhất trong xâu và kí tự có số lần xuất hiện nhiều nhất ở trong xâu.

//Trong trường hợp có nhiều kí tự có cùng số lần xuất hiện lớn nhất hoặc nhỏ nhất thì in ra kí tự có thứ tự từ điển lớn nhất.



int main(){
    char c[1000];
    gets(c);
    int cnt[256]= {0};
    for (int i = 0; i < strlen(c); i++)
    {
        cnt[c[i]]++;
    }
    int max = 0, min = 1e9;
    char charmax, charmin;
    for (int i = 0; i < 256; i++)
    {
        if(cnt[i] >= max){
            max = cnt[i];
            charmax = (char)i;
        }
        if (cnt[i] != 0 && cnt[i] <= min)
        {
            min = cnt[i];
            charmin = (char) i;
        }
    }
    printf("%c %d\n", charmax,max);
    printf("%c %d", charmin,min);
    
}