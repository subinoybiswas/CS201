#include<stdio.h>

int main() {
    int ch;
    printf("Enter Your Choice:");
    scanf("%d",&ch);
    // maam baaje porai 
    switch(ch) {
        case 1:
            {
                int a;
                printf("Enter a number: ");
                scanf("%d",&a);
                if(a%2==0) {
                    printf("The number is Even");
                }
                else {
                    printf("The number is Odd");
                }
                break;
            }
        case 2:
            {
                long long b,fac;
                fac = 1;
                printf("The Number is: ");
                scanf("%lld",&b);
                for(int i=1;i<b;i++){
                    fac *= i;
                }
                printf("The Factorial is: %lld",fac);
                break;
            }
        case 3:
            {
                int f;
                printf("Enter a number: ");
                scanf("%d",&f);
                int c=0;
                for(int i=2;i<f;i++){
                    if(f%i==0)
                    c++;
                }
                if(c == 0)
                    printf("Prime");
                else
                    printf("Not prime");    
                break;
            }
        default: 
            printf("Please choose among 1, 2, and 3");
            break;
    }
    return 0;
}
