#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//Chuẩn hóa tên 2

//Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, 
//giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người theo 2 mẫu được yêu cầu trước. Xem output để rõ hơn về cách chuẩn hóa.

void chuanhoa(char c[]){
    c[0] = toupper(c[0]);
    for (int i = 1; i < strlen(c); i++)
    {
        c[i] = tolower(c[i]);
    }
}

void viethoa(char c[]){
    for (int i = 0; i < strlen(c); i++)
    {
        c[i] = toupper(c[i]);
    }   
}

int main(){
    char c[5000];
    gets(c); 
    char a[1000][20];
    char* token = strtok(c," ");
    int n = 0;
    while (token != NULL)
    {
        strcpy(a[n],token);
        ++n;
        token = strtok(NULL," ");
    }
    for (int i = 0; i < n - 1; i++)
    { 
        chuanhoa(a[i]);
        printf("%s", a[i]);
        if(i == n - 2) printf(", ");
        else printf(" ");
    }
    viethoa(a[n-1]);
    printf("%s\n", a[n - 1]);
    printf("%s, ", a[n - 1]);
    for (int i = 0; i < n - 1; i++)
    { 
        printf("%s ", a[i]);
        if (i != n - 2)
        {
         printf(" ");
        }
        
    }

}
            