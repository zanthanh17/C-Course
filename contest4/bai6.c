#include <stdio.h>


//Cho 2 số nguyên dương N và K. Hãy tính tổ hợp chập K của N.

int tohop(int n, int k){
    if(k == 0 || k == n )
        return 1;
    else 
        return tohop(n - 1,k - 1) + tohop(n - 1,k);
}
int main() { 
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    printf("%d", tohop(n,k));
    return 0;
}

