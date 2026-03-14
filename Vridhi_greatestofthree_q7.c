#include <stdio.h>
int main(){
    int m ,n, o;
    scanf("%d %d %d", &m,&n,&o);
    (m > n) && (m > o)? printf("%d",m) : (n > o) && (n > m)? printf("%d",n) :printf("%d", o);
    return 0;
}