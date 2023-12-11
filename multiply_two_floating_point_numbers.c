#include<stdio.h>
int main()
{
    float a;
    float b;
    printf("Enter the first number\n");
    scanf("%f",&a);
    printf("Enter the second number\n");
    scanf("%f",&b);
    printf("The product of the two floating point numbers is %0.2f",a*b);
    return 0;
}