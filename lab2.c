#include<stdio.h>

void main(){
    float s1,s2,s3,s4,s5,avg;
    printf("Enter the matks of 5 subjects: ");
    scanf("%f,%f,%f,%f,%f",&s1,&s2,&s3,&s4,&s5);
    avg =(s1+s2+s3+s4+s5)/5;
    if(avg>=60){
        printf("The person got first division!");}
    else if(avg>=50&&avg<=59){
        printf("The person got second division!");
    }
    else if(avg>=40&&avg<=49){
        printf("The person got third division");
    }
    else if(avg<40){
        printf("The person failed!");
    }
}