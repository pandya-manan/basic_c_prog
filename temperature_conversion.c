#include<stdio.h>
int main()
{
    float fahrenheit;
    printf("Enter the temperature in Fahrenheit\n");
    scanf("%f",&fahrenheit);
    float celsius=(fahrenheit-32)*(5.0/9.0);
    printf("The temperature in celsius is %0.2f",celsius);
    return 0;
}