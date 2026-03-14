#include <stdio.h>
int main(){
    int n, reverse = 0,dig,original;
    scanf("%d",&n);
    original = n;
    while(n>0){
        dig = n % 10;
        reverse = (reverse * 10) + dig;
        n = (int)(n / 10);
    }
    printf("%d\n",reverse);
    if(original == reverse){
        printf("Palindrome");
    }else{
        printf("Not a Palindrome");
    }
}