#include<stdio.h>

int main(){
    int population=1000;
    for(int i=1;i<=10;i++){
        population=population + population*0.1;
        printf("The population of year %d is: %d\n",i,population);
    }
}