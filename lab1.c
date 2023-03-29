#include<stdio.h>

void main(){
    int quantity;
    float price,total;
    int dis;
    printf("Enter the Quatitiy,Price,and Discount: ");
    scanf("%d,%f,%d",&quantity,&price,&dis);
    if(quantity>1000){
        total = (quantity*price)-(quantity*price)*(dis/100);
        printf("Your total is %f",total);
    }
    else{
        printf("Invalid!,Quantity isn't enough!");
    }
}