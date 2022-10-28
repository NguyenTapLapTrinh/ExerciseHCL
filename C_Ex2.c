#include<stdio.h>
int main()
{
    int n;
    char ch=1;
    printf("Enter the size of your screen: "); scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%c", ch);
    }
}