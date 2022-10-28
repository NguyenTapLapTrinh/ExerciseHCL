#include<stdio.h>

int main(){
    int i=2;
    while(i<=300){
        int number=i;
        int flag=0;
        for(int j=2;j<=number/2;j++){
            if(number%j==0){
                flag=1;
                continue;
            }
        }
        if(flag==0){
            printf("%d ",i);
        }
        i++;
    }
}