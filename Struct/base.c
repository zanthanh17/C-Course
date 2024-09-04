#include <stdio.h>
#include <string.h>

struct sinhvien
{
    char ten[100];
    char lop[100];
    double gpa;
};

typedef struct sinhvien sinhvien;

//nhap thong tin sinh vien va tra ve sinh vien sau khi  nhap
sinhvien nhap(){
    sinhvien x;
    printf("Nhap ten: "); gets(x.ten);
    printf("Nhap lop: "); gets(x.lop);
    printf("Nhap gpa: "); scanf("%lf", &x.gpa);
    return x;

}

void in(sinhvien x){
    printf("%s %s %.2lf\n", x.ten, x.lop, x.gpa);
}
int main(){
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    sinhvien a[n];
    for (int i = 0; i < n; i++)
    {
        getchar();
        a[i] = nhap();  
    }
    printf("Danh sach sinh vien vua nhap: \n");
    for (int i = 0; i < n; i++)
    {
        in(a[i]);
    }
    return 0;

}