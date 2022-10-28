#include<stdio.h>
#include<math.h>
int main(){
    float x;
    printf("Enter the x value: ");
    scanf("%f",&x);
    float sum;
    for(int i=1;i<=7;i++){
        sum+=(1.0/i)*pow((x-1)/x,i);
    }
    printf("The sum of first seven terms of this series is: %.2f",sum);
}