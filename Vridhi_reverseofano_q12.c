#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n>0){
        printf("%d",n%10);
        n = (int)(n / 10);
    }
}