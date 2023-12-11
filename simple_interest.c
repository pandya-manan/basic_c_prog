#include<stdio.h>
int main()
{
    float principal,rate;
    int timeInYears;
    printf("Enter the principal\n");
    scanf("%f",&principal);
    printf("Enter the rate\n");
    scanf("%f",&rate);
    printf("Enter the timeInYears\t");
    scanf("%d",&timeInYears);
    float SI=(principal*timeInYears*rate)/100.0;
    printf("The simple interest is %0.2f",SI);
    return 0;

}