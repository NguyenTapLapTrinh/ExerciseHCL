#include<stdio.h>

int main()
{
    printf("The genarate combination of 1, 2 and 3 is: ");
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            for(int k=1;k<=3;k++){
                if(i!=j && k!=j && k!=i){
                    printf("\n%d %d %d ",i,j,k);
                }
            }
        }
    }
}