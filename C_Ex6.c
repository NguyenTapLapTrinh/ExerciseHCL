#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: "); scanf("%d",&num);
    printf("The mutiplication table of %d\n",num);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
}