#include<stdio.h>

int main(){
    int n;
    float sum=0;
    printf("Enter the range of sum: ");
    scanf("%d",&n);
    for(float i=1.0;i<=n;i++){
        int factor=1;
        for(int j=1;j<=i;j++){
            factor*=j;
        }
        sum=sum+(i/factor);
    }
    printf("The sumary is: %f",sum);
}