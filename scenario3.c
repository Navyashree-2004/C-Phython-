#include<stdio.h>
void main()
{
    float l1,b1,l2,b2,I,E,CI,CE,total;
    
    printf("input number of inetrior walls");
    scanf("%f",&I);
    printf("input number of exterior walls");
    scanf("%f",&E);
    printf("length of interior walls");
    scanf("%f",&l1);
    printf("breadth of interior walls");
    scanf("%f",&b1);
    printf("length of exterior walls");
    scanf("%f",&l2);
    printf("breadth of exterior walls");
    scanf("%f",&b2);
    CI=l*b*18*I;
    CE=l*b*12*E;
    total = (CI + CE);
    printf("total cost= ",total);
    scanf("%f",&total);
}


