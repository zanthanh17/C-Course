#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Đếm số lượng từ trong xâu

//Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy đếm số lượng từ xuất hiện trong xâu S.

//Gợi ý : Bạn có thể đọc cả dòng bằng getline rồi dùng stringstream để tách ra hoặc dùng cú pháp đọc hết các từ trong input :


int main(){
    char c[100001];
    gets(c); 
    char a[100][100];
    char* token = strtok(c, " ");
    int n = 0;
    int cnt = 0;
    while (token != NULL)
    {
        strcpy(a[n], token);
        ++n;
        token = strtok(NULL, " ");
    }
    printf("%d", n);
}
    

