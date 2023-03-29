#include<stdio.h>

int main(){
    int a,b,c;
    float d,e,f,E;
    printf("Enter the values of a,b,c,d,r,f: ");
    scanf("%d,%d,%d,%f,%f,%f",&a,&b,&c,&d,&e,&f);
    E = a+(b*c)-(d+e)*f;
    printf("%f",E);
    return 0;
}