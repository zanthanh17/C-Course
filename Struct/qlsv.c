#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct sinhvien
{
    char ten[100];
    char lop[100];
    double gpa;
};

typedef struct sinhvien sinhvien;

//nhap thong tin sinh vien va tra ve sinh vien sau khi  nhap
void nhap(sinhvien *x){
    getchar();
    printf("Nhap ten: "); gets(x->ten);
    printf("Nhap lop: "); gets(x->lop);
    printf("Nhap gpa: "); scanf("%lf", &x->gpa);
}

void in(sinhvien x){
    printf("%s %s %.2lf\n", x.ten, x.lop, x.gpa);
}
void timkiem(sinhvien a[], int n, char name[]){
    int find = 0;
    for (int  i = 0; i < n; i++)
    {
        if(strcmp(name, a[i].ten) == 0){
            in(a[i]);
            find = 1; //tim thay
        }
    }
    if (!find) 
        printf("Khong tim thay sinh vien! \n");
}

//in ra sinh vien co gpa cao nhat
void maxGpa(sinhvien a[], int n){
    double max = 0;
    for (int i = 0; i < n; i++)
    {
        max = fmax(max, a[i].gpa);
    }
    printf("Thong tin sinh vien co diem gpa cao nhat: ");
    for (int i = 0; i < n; i++)
    {
        if (max == a[i].gpa)
        {
            in(a[i]);
        }
    }  
}

//Xoa thong tin sinh vien
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

//sap xep
int cmp(const void *a,const void *b){
    sinhvien *x = (sinhvien*)a;
    sinhvien *y = (sinhvien*)b;
    if (y->gpa > x->gpa)
    {
        return 1;
    }
    else return -1;
}

int main(){
    sinhvien a[1000];
    int n;
    while (1)
    {
        printf("________________QLSV________________\n");
        printf("1.Nhap danh sach sinh vien\n");
        printf("2.Hien thi danh sach sinh vien\n");
        printf("3.Tim kiem sinh vien theo ten\n");
        printf("4.Liet ke sinh vien co diem cao nhat\n");
        printf("5.Xoa sinh vien theo ten\n");
        printf("6.Sap xep sinh vien theo gpa giam dan\n");
        printf("0.thoat!!\n");
        printf("____________________________________\n");

        printf("Nhap lua chon: ");
        int lc; scanf("%d", &lc);
        if(lc == 1){
            printf("Nhap so luong sinh vien: "); scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                nhap(&a[i]);
            }
        }
        else if (lc == 2)
        {
            printf("Danh sach sinh vien: \n");
            for (int i = 0; i < n; i++)
            {
                in(a[i]);
            }
        }
        else if (lc == 3)
        {
            char name[100];
            printf("Nhap ten sinh vien can tim kiem: ");
            gets(name);
            timkiem(a,n,name);
        }
        else if(lc == 4){
            maxGpa(a,n);
        }
        else if(lc == 5){
            char name[100];
            printf("Nhaop ten sinh vien can tim kiem: ");
            gets(name);
            xoaSinhvien(a, n, name);
        }
        else if(lc == 6){
            qsort(a,n,sizeof(sinhvien),cmp);
        }
        else if(lc == 0){
            break;
        }      
    }
    return 0;

}