//area of a rectamgle in floating point datatype
#include <stdio.h>
float area(float a,float b)
{
    return (a*b);
}
void main()
{
    float a,b,ar;
    printf("write the length of a rectangle");
    scanf("%f",&a);
    printf("write the breadth of the rectangle");
    scanf("%f",&b);
    
    printf("the length of the rectangle is %f\nthe breadth of the rectangle is %f\n",a,b);
    ar= area(a,b);
    printf("the area of the given rectangle is %f",ar);
    
}
