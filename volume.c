//volume of a cuboid
#include <stdio.h>
float volume(float a,float b,float c)
{
    return (a*b*c);
}
void main()
{
    float a,b,c,vol;
    printf("write the length of a cuboid");
    scanf("%f",&a);
    printf("write the breadth of the cuboid");
    scanf("%f",&b);
    printf("write the height of the cuboid");
    scanf("%f",&c);
  
    vol=volume(a,b,c);
    printf("the area of the given rectangle is %f",vol);
    
}
