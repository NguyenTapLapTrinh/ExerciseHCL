#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    int result=pow(a,b);
    printf("%d raised to the power %d: %d",a,b,result);
}