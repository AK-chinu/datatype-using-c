#include<stdio.h>
void main()
{
    int x=2,y=5,z;
    x=x^y;
    y=y^x;
    z=x-y;
    printf("%d",y);
}