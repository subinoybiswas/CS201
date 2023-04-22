#include<stdio.h>


int main(){
    char a;
    printf("Enter the Charecter: ");
    scanf("%c",&a);
    if(a>='a'&&a<='z'){
    printf("Is Lowercase");}
    else{
        printf("Is Uppercase");
    }
    return 0;
}