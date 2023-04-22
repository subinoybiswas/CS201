#include <stdio.h>

void main(){
    int i,j,a;
    int n=10;
    a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
    
        for(j=1;j<=i;j++){
            printf("%d ",a++);
        }
        printf("\n");
    }
}
