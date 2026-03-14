#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i = m ; i<=n ; i++ ){
        int flag = 0;
        if (i<=1)
            continue;
        
        for(int j = 2 ; j <= i ;j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        
        }
        if(flag == 0){
        printf("%d",i);
    }
    }
    
}

