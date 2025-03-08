#include<stdio.h>
void main()
{
    int N=10,k=5,a;
    printf("enter input");
    scanf("%d,&a");
    if(a<N-k || a<=0)
    {
        printf("input is invalid");
        printf("\n number of candies left %d,N");
    }
        else
        {
            printf("number of candies sold %d,n");
            printf("\n number of candies left %d,N-a");
        }
    
}