#include<stdio.h>

int main(){
    float r,area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area= 3.14*r*r;
    printf("The area of the circle is %f square units",area);
    return 0;
}