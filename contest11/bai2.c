#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Cấu trúc số phức

//Xây dựng cấu trúc số phức gồm phần thực, phần ảo. Tiến hành nhập 2 số phức và tính tổng, hiệu, tích của 2 số phức này và in ra màn hình.

struct sophuc
{
    int thuc,ao;
};

typedef struct sophuc sophuc;



sophuc tong(sophuc a, sophuc b){
    sophuc res;
    res.thuc = a.thuc + b.thuc;
    res.ao = a.ao + b.ao;
    return res;
}

sophuc hieu(sophuc a, sophuc b){
    sophuc res;
    res.thuc = a.thuc - b.thuc;
    res.ao = a.ao - b.ao;
    return res;
}

sophuc tich(sophuc a, sophuc b){
    sophuc res;
    res.thuc = a.thuc * b.thuc - a.ao * b.ao;
    res.ao = a.thuc * b.ao + a.ao * b.thuc;
    return res;
}

int main(){
    sophuc a,b;
    scanf("%d%d%d%d", &a.thuc, &a.ao, &b.thuc, &b.ao);
    sophuc t = tong(a,b) , h = hieu(a,b), T = tich(a,b);
    printf("%d %d\n%d %d\n%d %d\n", t.thuc, t.ao, h.thuc, h.ao, T.thuc, T.ao);
    return 0;

}