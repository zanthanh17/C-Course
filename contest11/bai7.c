#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Đuổi học sinh viên

//Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. 
//Dựa vào kết quả GPA những sinh viên nào có điểm gpa < 1.0 sẽ bị đuổi học, nhiệm vụ của bạn là xóa những sinh viên có gpa < 1.0 sau đó in ra danh sách sinh viên còn lại.

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

void xoaSinhvien(sinhvien a[], int *n, char name[]){
    for (int i = 0; i < *n; i++)
    {
        if(strcmp(a[i].ten, name) == 0){
            for (int j = i; i < *n-1; i++)
            {
                a[j] = a[j + 1];
            }
            break;
            (*n)--;
        }
    }
}

/*int cmp(const void *a, const void *b){
    sinhvien *x = (sinhvien*)a;
    sinhvien *y = (sinhvien*)b;
     return strcmp(x->ten,y->ten);
}*/

int main(){
    int n;
    scanf("%d", &n);
    sinhvien a[n];
    char name[100];
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
        if (a[i].gpa < 1.0)
        {
            xoaSinhvien(a,&n,name);
        }
        in(a[i]);
        printf("\n");
    }  
        return 0;
}
