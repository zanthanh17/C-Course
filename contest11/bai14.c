#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Đánh giá chất lượng

//Để đánh giá chất lượng khóa học lập trình C/C++, 28tech tổ chức thu thập các bình luận của học viên. 
//Trong đó sẽ lọc ra các từ có nội dung "good", "bad", "wonderful", "terrible". 
//Bạn hãy xác định xem trong các bình luận của học viên mỗi từ trên xuất hiện bao nhiêu lần để 28tech có thể tự đánh giá và hoàn thiện khóa học được tốt hơn, 
//nếu từ nào không xuất hiện thì bạn không cần liệt kê. Hãy sắp xếp các từ theo tần suất giảm dần, nếu 2 từ có cùng tần suất thì sắp xếp theo thứ tự từ điển

struct  word
{
    char data[100];
    int fre;
};

typedef struct word word;

word a[1000];
int n = 0;

int findPos(char c[]){
    for (int i = 0; i < n; i++)
    {
        if (strcmp(c,a[i].data) == 0)
        {
            return i;
        }
    }
    return -1;
}

int nd(char c[]){
        if (strcmp(c,"good") == 0 || strcmp(c,"wonderful") == 0 ||  strcmp(c,"bad") == 0 ||  strcmp(c,"terrible") == 0)
        {
            return 1;
        }
    return 0;
}

int cmp(const void *a, const void *b){
    word *x = (word*)a;
    word *y = (word*)b;
    if (x->fre == y->fre)
    {
        return strcmp(x->data,y->data);
    }
    else return y->fre - x->fre;
}

int main(){
    char tmp[10001];
    while (scanf("%s", tmp) != -1)
    {
        int Pos = findPos(tmp);
        if(nd(tmp)){
            if (Pos == -1)
            {
                strcpy(a[n].data, tmp);
                a[n].fre = 1;
                ++n;
                }
                else a[Pos].fre+=1;
                }  
    }  
    qsort(a,n,sizeof(word),cmp);
    for (int i = 0; i < n; i++)
    {
        if (a[i].fre != 0)
        {
            printf("%s %d\n", a[i].data,a[i].fre);
        }    
    } 
    return 0;
}