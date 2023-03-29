#include<stdio.h>
int main(){
    float a,b,area;
    printf("Enter the Height and Width: ");
    scanf("%f\t%f",&a,&b);
    area = a*b;
    printf("The area is %f square units",area);
    return 0;
}