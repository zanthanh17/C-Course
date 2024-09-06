#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

//Khảo sát Internet

//28tech đang làm khảo sát về việc truy cập vào website của học viên trong phòng máy. 
//Bạn hãy viết chương trình để quản lý lượt truy cập vào các trang web sau đó liệt kê các website theo thứ tự lượt được truy cập giảm dần. Nếu có 2 trang web có cùng lượt truy cập thì bạn in ra trang web có thứ tự từ điển nhỏ hơn trước.

struct  internet
{
    char web[100];
    int truycap;
};

typedef struct internet internet;

internet a[1000];
int n = 0;

int findPos(char c[]){
    for (int i = 0; i < n; i++)
    {
        if (strcmp(c,a[i].web) == 0)
        {
            return i;
        }
    }
    return -1;
}

int cmp(const void *a, const void *b){
    internet *x = (internet*)a;
    internet *y = (internet*)b;
    if (x->truycap == y->truycap)
    {
        return strcmp(x->web,y->web);
    }
    else return y->truycap - x->truycap;
}

int main(){
    char ngay[100],gio[100],diachiweb[100];
    while (scanf("%s%s%s", ngay,gio,diachiweb) != -1)
    {
        int Pos = findPos(diachiweb);
            if (Pos == -1)
            {
                strcpy(a[n].web, diachiweb);
                a[n].truycap = 1;
                ++n;
                }
                else a[Pos].truycap += 1;
                }   
    qsort(a,n,sizeof(internet),cmp);
    for (int i = 0; i < n; i++)
    {
            printf("%s %d\n", a[i].web,a[i].truycap); 
    } 
    return 0;
}