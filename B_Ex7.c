#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of entries: ");
    scanf("%d",&n);
    int cPositive=0, cNegative=0, cZero=0;
    int i=0;
    while(i<n){
        int num;
        printf("\nEnter the number: "); 
        scanf("%d",&num);
        if(num==0){
            cZero++;
        }
        else if(num>0){
            cPositive++;
        }
        else{
            cNegative++;
        }
    }
    printf("The count of zero number is: %d",cZero);
    printf("The count of positive number is: %d",cPositive);
    printf("\nThe count of negative number is: %d",cNegative);
}