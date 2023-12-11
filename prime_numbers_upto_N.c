#include<stdio.h>
#include<stdbool.h>
bool isPrime(int number);
int main()
{
    int range;
    printf("Enter the upper limit\n");
    scanf("%d",&range);
    for(int i=2;i<=range;i++)
    {
        if(isPrime(i))
        {
            printf("%d\t",i);
        }
    }
    
}

bool isPrime(int number)
{
    int flag=-1;
    for(int i=2;i<=number/2;i++)
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
        return true;
    }
    else
    {
        return false;
    }
}