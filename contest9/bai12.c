#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//bai4:xoa ki tu khong muon


//Tèo là một người ghét 28tech vì cho rằng 28tech cho quá nhiều bài tập khó làm anh ta phải đau đầu.

//Vì thế anh ta ghét tất cả những chữ cái xuất hiện trong từ "28tech", Tèo muốn nhờ bạn xóa hết những kí tự xuất hiện trong từ "28tech" khỏi xâu kí tự S, bạn hãy giúp Tèo nhé.

//Nếu xâu S sau khi xóa không còn kí tự nào bạn phải in ra EMPTY

int main(){
    char c[10005];
    scanf("%s", c);
    int cnt =0 ;
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == '2'|| c[i] == '8' || c[i] == 't' || c[i] == 'e'  || c[i] == 'c' || c[i] == 'h')
        {
            ++cnt;
        }      
        else printf("%c", c[i]); 
    }  
    if (cnt == strlen(c))
    {
        printf("EMPTY");
    }  
    return 0;
}