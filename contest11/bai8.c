#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Sắp xếp sinh viên theo địa chỉ

//Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. 
//Thực hiện sắp xếp sinh viên theo địa chỉ tăng dần về thứ tự từ điển, nếu 2 sinh viên cùng địa chỉ thì sinh viên nào có gpa cao hơn sẽ xếp trước.

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

/*void xoaSinhvien(sinhvien a[], int *n, char name[]){
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
}*/

int cmp(const void *a, const void *b){
    sinhvien *x = (sinhvien*)a;
    sinhvien *y = (sinhvien*)b;
    if(strcmp(x->diachi, y->diachi) != 0){
        return strcmp(x->diachi,y->diachi);
    }
    else {
        if(x->gpa > y->gpa)
             return  -1;
        else return 1;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    sinhvien a[n];
    for (int i = 0; i < n; i++)
    {
       getchar();
        fgets(a[i].ten,100,stdin); a[i].ten[strlen(a[i].ten) - 1] = '\0';
        fgets(a[i].ngaysinh,100,stdin);a[i].ngaysinh[strlen(a[i].ngaysinh) - 1] = '\0';
        fgets(a[i].diachi,100,stdin);a[i].diachi[strlen(a[i].diachi) - 1] = '\0';
        scanf("%lf", &a[i].gpa);
    } 
    qsort(a,n,sizeof(sinhvien),cmp);  
    for (int i = 0; i < n; i++)
    {       
        in(a[i]);
        printf("\n");
    }  
        return 0;
}
