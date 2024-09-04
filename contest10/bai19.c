#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//Tạo email & mật khẩu 2

//Hiện tại trường đại học XYZ tổ chức cấp email cho sinh viên mới nhập học.
// Email và mật khẩu sẽ được cấp dựa trên tên của sinh viên và ngày sinh của sinh viên đó. 
//Bạn hãy viết chương trình để cấp tài khoản theo yêu cầu như sau, tên email được tạo bằng cách lấy tên của sinh viên và ghép với các chữ cái đầu tiên của họ và tên đệm, tất các ký tự trong email đều ở dạng in thường


struct word
{
    char data;
    int tanSuat;
};

typedef struct word word;



int main(){
    int sl;
    scanf("%d", &sl);
    getchar();
    while (sl--)
    {
        char c[5000];
        fgets(c, 5000, stdin);
        c[strlen(c)-1] = '\0';
        char a[1000][20];
        int n = 0;
        for (int i = 0; i < strlen(c); i++)
    {
        c[i] = tolower(c[i]);
    }
    char* token = strtok(c," ");
        while (token != NULL)
        {
            strcpy(a[n],token);
            ++n;
            token = strtok(NULL," ");
            }
            printf("%s", a[n-2]);
            for (int i = 0; i < n - 2; i++)
            {
                printf("%c", a[i][0]);
            }
            printf("@xyz.edu.vn\n");
            token = strtok(a[n - 1], "/");
            while (token != NULL)
            {
                int so = atoi(token);
                printf("%d", so);
                token = strtok(NULL, "/");
            }         
            printf("\n");   
    }   
    

}
            