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
    for (int i = 0; i < strlen(c); i++)
    {
        if(cnt[c[i]]){
            int pos = i;
           for (int j = i + 1; j < strlen(c) - 1; j++)
           {
            if(cnt[c[i]] < cnt[c[j]]){
                pos = j;
            }               
                printf("%c %d\n", c[pos], cnt[c[pos]]);
           }  
           cnt[c[i]] = 0;
        }
    }
}