#include<stdio.h>

void main(){
int R,S,A;
printf("Enter the ages of Ram,Shyam,Ajay: ");
scanf("%d,%d,%d",&R,&S,&A);
if(R<S&&R<A){
    printf("Ram is the youngest");
}
else if(S<R&&S<A){
    printf("Shyam is youngest");
}
else{
    printf("Ajay is youngest");
}
}