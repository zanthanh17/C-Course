#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Cấu trúc sinh viên

//Đại học 28Univerisy nhận được 1 danh sách học sinh gồm thông tin về tên, ngày sinh, địa chỉ, điểm thi đại học của 3 môn Toán, Lý, Hóa. 
//Nhiệm vụ của bạn dựa trên điểm trúng tuyển của ngành CNTT là 24 để xác định bạn nào trượt, bạn nào đỗ. Ngoài ra bạn còn phải tìm ra thủ khoa ngành CNTT năm nay.

struct sinhvien
{
    char ten[100];
    char ngaysinh[100];
    char diachi[100];
    int diemToan,diemLy,diemHoa;
};

typedef struct sinhvien sinhvien;

void in(sinhvien x){
    printf("%s %s %s %d ", x.ten, x.ngaysinh, x.diachi, x.diemToan + x.diemLy + x.diemHoa);
}

int main(){
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    sinhvien a[n];
    int max_diem = 0;
    for (int i = 0; i < n; i++)
    {
       getchar();
         fgets(a[i].ten,100,stdin); a[i].ten[strlen(a[i].ten) - 1] = '\0';
        fgets(a[i].ngaysinh,100,stdin);a[i].ngaysinh[strlen(a[i].ngaysinh) - 1] = '\0';
        fgets(a[i].diachi,100,stdin);a[i].diachi[strlen(a[i].diachi) - 1] = '\0';
        scanf("%d%d%d", &a[i].diemToan, &a[i].diemLy, &a[i].diemHoa);
       max_diem = fmax(max_diem,a[i].diemToan + a[i].diemHoa + a[i].diemLy);
    }
    printf("DANH SACH THU KHOA:\n");
    for (int i = 0; i < n; i++)
    {
        if(a[i].diemToan + a[i].diemHoa + a[i].diemLy == max_diem){
            in(a[i]);
            printf("\n");
        }
    }
    printf("KET QUA XET TUYEN:\n");
    for (int i = 0; i < n; i++)
    {
        in(a[i]);
        if (a[i].diemToan + a[i].diemHoa + a[i].diemLy >= 24)
        {
            printf("DO\n");
        }
        else printf("TRUOT\n");
        
    }
    return 0;

}