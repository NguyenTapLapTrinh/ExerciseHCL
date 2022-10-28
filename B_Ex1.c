#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1, working_hours, over_time;
    float over_time_pay;
    while(i<=10)
    {
        printf("Enter the working hours of employee %d: ", i);
        scanf("%d", &working_hours);
        if(working_hours>40)
        {
            printf("Employee %d overtime pay is %.2f\n", i, (working_hours-40)*12.00);
        }
        else
            printf("You have to work %d more hour to get over time pay\n",40-working_hours);
        i++;
    }
}