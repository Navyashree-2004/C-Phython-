#include<stdio.h>
void main()
{
    int n;
    printf("input value");
    scanf("%d",&n);
    if(n>0&&n<=7000)
    {
        if(n==0)
        {
            printf("time estimated: 0minutes");
        }
        else if(n>=1&&n<=2000)
        {
            printf("time estimated: 25minutes");
        }
        else if(n>=2001&&n<=4000)
        {
            printf("time estimated: 35minutes");
        }
        else if(n>4000&&n<=7000)
        {
        printf("time estimated: 45minutes");
        }
    }
    else
    {
        if(n<0)
        {
            printf("invalid input");
        }
            else if(n>7000)
        {
                printf("overloaded");
        }
    }
    
}