#include<stdio.h>

void main(){
    int a,fac;
    fac = 1;
    printf("The Number is: ");
    scanf("%d",&a);
for(int i=1;i<a;i++){
    fac *= i;
}
    printf("The Factorial is: %d",fac);
}