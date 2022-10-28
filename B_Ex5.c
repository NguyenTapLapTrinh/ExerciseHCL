#include<stdio.h>
#include<math.h>

int main(){
    printf("The Armstrong number squence:  ");
    for(int i=1;i<=500;i++){
        int original=i;
        int result=0;
        int rem;
        while(original>0){
            rem = original%10;
            result+=rem*rem*rem;
            original/=10;
        }
        if(result==i){
            printf("%d ",i);
        }
    }
}