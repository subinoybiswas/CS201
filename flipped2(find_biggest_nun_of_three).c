#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a>=b){
        if(a>=c){
            printf("The Biggest Number is: %d",a);
        }
        else{
            printf("The Biggest Number is: %d",c);
        }
    }
    else if(b>=a){
        if(b>=c){
             printf("The Biggest Number is: %d",b);
        }
        else{
             printf("The Biggest Number is: %d",c);
        }
    }
    return 0;
}