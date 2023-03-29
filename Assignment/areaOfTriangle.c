#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,S,area;
    printf("Enter the space separated values: ");
    scanf("%f\t%f\t%f",&a,&b,&c);
    S = (a+b+c)/2;
    area = (S*(S-a)*(S-b)*(S-c));
    printf("The Area is %f square units",sqrt(area));
    return 0;
}