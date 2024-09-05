#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Địa chỉ sinh viên

//Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. 
//Bạn hãy tìm ra tỉnh thành có nhiều sinh viên nhất, nếu có nhiều tỉnh thành có cùng số lượng sinh viên thì in ra hết theo thứ tự từ điển.

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

struct Tinhthanh{
    char ten[100];
    int sl;
};

typedef struct Tinhthanh Tinhthanh;

Tinhthanh v[1000];
int m = 0;

int findPos(char diachi[]){
    for (int i = 0; i < m; i++)
    {
        if (strcmp(v[i].ten, diachi) == 0)
        {
            return i;
        }    
    }
    return -1;
}
int cmp(const void *a, const void *b){
    Tinhthanh *x = (Tinhthanh*)a;
    Tinhthanh *y = (Tinhthanh*)b;
    return strcmp(x->ten,y->ten);
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
        int Pos = findPos(a[i].diachi);
        if(Pos == -1){
            strcpy(v[m].ten, a[i].diachi);
            v[m].sl = 1;
            ++m;
         }
         else v[Pos].sl++;
    } 
    int max_fre = 0;
    for (int i = 0; i < m; i++)
    {
        if(v[i].sl > max_fre){
            max_fre = v[i].sl;
        } 
    }
    
    qsort(v,m,sizeof(Tinhthanh),cmp);  
    for (int i = 0; i < m; i++)
    {       
        if (v[i].sl == max_fre)
        {
            printf("%s\n", v[i].ten);
        }
        
    }  
        return 0;
}
