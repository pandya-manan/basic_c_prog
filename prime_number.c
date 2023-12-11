#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number\n");
    int flag=-1;
    scanf("%d",&number);
    int number1=number;
    for(int i=2;i<number/2;i++)
    {
        if(number%i==0)
        {
            flag=0;
            break;
        }
        else
        {
            continue;
        }
    }
    if(flag==-1)
    {
        printf("The given number %d is a prime number",number1);
    }
    else
    {
        printf("The given number %d is not a prime number",number1);
    }
}