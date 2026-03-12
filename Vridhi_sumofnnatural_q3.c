#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    if (n>=0){
        for(int i = 1; i <= n; i++ ){
            sum += i;
        }}else{
            printf("negative number not allowed.");
        }
        printf("sum = %d",sum);
}