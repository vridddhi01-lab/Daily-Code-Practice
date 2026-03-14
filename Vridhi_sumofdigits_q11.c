#include <stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d",&n);
    if(n>=0){
        goto WHILE;
    }else{
        n = -n;
        goto WHILE;
    }
    
    WHILE:
    while(n>0){
        sum += n % 10;
        n = (int)(n / 10);
    }
    printf("%d",sum);
}