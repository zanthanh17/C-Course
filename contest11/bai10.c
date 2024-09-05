#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Sinh viên tháng 4

//Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Bạn hãy liệt kê các sinh viên sinh vào tháng 4.

struct sinhvien
{
    char ten[100];
    char ngaysinh[100];
    char diachi[100];
    double gpa;
};

typedef struct sinhvien sinhvien;

void in(sinhvien x){
    printf("%s %s %s %.2lf ", x.ten, x.ngaysinh, x.diachi, x.gpa);
}


int getMonth(char ngaysinh[]){
    char tmp[100];
    strcpy(tmp,ngaysinh);
    char *token = strtok(tmp, "/");
    token = strtok(NULL, "/");
    if (atoi(token) == 4)
    {
        return 1;
    }
    else return 0;
}



int main(){
    int n;
    scanf("%d", &n);
    sinhvien a[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
       getchar();
        fgets(a[i].ten,100,stdin); a[i].ten[strlen(a[i].ten) - 1] = '\0';
        fgets(a[i].ngaysinh,100,stdin);a[i].ngaysinh[strlen(a[i].ngaysinh) - 1] = '\0';
        fgets(a[i].diachi,100,stdin);a[i].diachi[strlen(a[i].diachi) - 1] = '\0';
        scanf("%lf", &a[i].gpa);
    } 
    for (int i = 0; i < n; i++)
    {
        if (getMonth(a[i].ngaysinh))
        {
            in(a[i]);
        }
    }
        return 0;
}
