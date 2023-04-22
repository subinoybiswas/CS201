#include<stdio.h>

int main(){
    int o,i;
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    o =0, i =1;
    while(a!=0){
    o +=(a%8)*i;
    a /= 8;
    i*=10;
    }
    printf("%d",o);
    return 0;
}