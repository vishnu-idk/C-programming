//find average of 3 numbers
#include <stdio.h>
float avg(float a,float b,float c)
{
    return (a+b+c)/3 ;
}
void main()
{
    
    float a,b,c,r;
    printf("give 3 numbers to find average");
    scanf("%f%f%f",&a,&b,&c);
    r=avg(a,b,c);
    printf("the average is %f",r);
    
}
