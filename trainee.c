#include<stdio.h>
void main()
{
    int ,Oxy1,total1=0,Oxy2,total2=0,Oxy3,total3=0;
    for(i=1;i<=3;i++)
    {
        total1=total1+Oxy1;
    }
    for(i=1;i<=3;i++)
    {
        total2=total2+Oxy2;
    }
    for(i=1;i<=3;i++)
    {
        total3=total3+Oxy3;
    }
    if(total1>total2>total3)
    {
        printf("trainee 1");
    }
    else if(total2>total3)
    {
        printf("trainee 2"); 
    }
    else
    {
        printf("trainee 3");
    }
}