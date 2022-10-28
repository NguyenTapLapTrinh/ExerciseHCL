#include<stdio.h>

int main()
{
    int n,s=1;
    printf("Enter the value: "); scanf("%d",&n);
    for(int i=2; i<=n;i++){
        s*=i;
    }
    printf("The factorial of number %d is %d",n,s);
}