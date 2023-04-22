#include<stdio.h>
#include<math.h>
void main(){
    for(int i=1;i<101;i++){
        if(i==1){
            continue;
        }
        else if(i==2){
            printf("2,");
        }
        else{
            for(int j=2;j<i;j++){
                if(i%j==0){
                 break;
            }
            else{
                printf("%d,",i);
                break;
            }
            
        }
    }
    }
}