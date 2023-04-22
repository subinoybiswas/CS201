#include <stdio.h>

int main(){
    int i,j;
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i+=2){
        for(j=1;j<n-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(j=1;j<n-i;j++){
            printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=n;i+=2){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<n-i;j++){
            printf("%d ",j);
        }
         for(j=1;j<=i;j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}