#include <stdio.h>

int main(){
    int a,temp,i=1;
    char c[100];
    printf("Enter any no. : ");
    scanf("%d",&a);
    while(a!=0){
        temp = a%16;
        if(temp < 10){
            temp += 48;
        }
        else{
            temp += 55;
        }
        c[i++] = (char)temp;
        a /= 16;
    }
    for(int j=i-1;j>0;j--){
        printf("%c",c[j]);
    }

    return 0;
}