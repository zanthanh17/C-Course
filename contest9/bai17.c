#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Liệt kê từ

//Cho một xâu S gồm nhiều từ, các từ được phân cách nhau bởi dấu cách hoặc các dấu '.', ',', '!', '?',

//Hãy liệt kê các từ xuất hiện trong xâu, giữa các từ cách nhau một dấu cách


int main(){
    char c[10005];
    gets(c);
    char* token = strtok(c, ".,!? ");
    int cnt = 0;
    while (token != NULL)
    {
        printf("%s ", token);
        token = strtok(NULL, ".,!? ");
    }
}
