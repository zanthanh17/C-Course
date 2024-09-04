#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Cấu trúc phân số

//Xây dựng cấu trúc phân số với 2 thành phần là tử và mẫu. Tiến hành nhập 2 phân số từ bàn phím và in ra phân số ở dạng tối giản.

//Tính tổng, hiệu của 2 phân số và in ra ở dạng tối giản. Chú ý trong trường hợp mẫu số âm thì đưa dấu âm lên trên tử

struct phanso
{
    int tu, mau;
};

typedef struct phanso phanso;


int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int lcm(int a, int b){
    return a * b / gcd(a,b);
}
phanso toigian(phanso a){
    phanso res;
    int uc = gcd(abs(a.tu),abs(a.mau));
    res.tu = a.tu/uc;
    res.mau = a.mau/uc;
    return res;
}

phanso tong(phanso a, phanso b){
    phanso res;
    int mc = lcm(a.mau, b.mau);
    res.mau = mc;
    res.tu = mc/a.mau * a.tu + mc/ b.mau * b.tu;
    return toigian(res);
}

phanso hieu(phanso a, phanso b){
    phanso res;
    int mc = lcm(a.mau,b.mau);
    res.tu = mc/ a.mau * a.tu - mc/ b.mau * b.tu;
    return toigian(res);
}

int main(){
    phanso a,b;
    scanf("%d%d%d%d", &a.tu, &a.mau, &b.tu, &b.mau);
    a =toigian(a); b = toigian(b);
    printf("%d/%d\n%d/%d\n", a.tu,a.mau,b.tu,b.mau);
    phanso t = tong(a,b) , h = hieu(a,b);
    printf("%d/%d\n%d/%d\n", t.tu, t.mau, h.tu, h.mau);
    return 0;

}