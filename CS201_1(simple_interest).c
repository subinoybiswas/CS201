#include <stdio.h>

void main(){
	int p,n;
	float r,si;
	printf("Enter the Principle: ");
	scanf("%d",&p);
	printf("Enter the number of years: ");
	scanf("%d",&n);
	printf("Enter the rate of interest: ");
	scanf("%f",&r);
	si=p*n*r/100;
	printf("%f",si);

}
