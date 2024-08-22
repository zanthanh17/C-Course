#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//bai4: Chữ số đứng giữa


//Cho số nguyên không âm N, hãy xác định chữ số đứng giữa của N, trong trường hợp N không có chữ số đứng giữa thì in ra "NOT FOUND".



int main(){
    char c[100];
    scanf("%s", c);
    if (strlen(c) % 2 == 0)
    {
        printf("NOT FOUND\n");
    }
    else{
        printf("%c", c[strlen(c) / 2]);
    }
    return 0;
}