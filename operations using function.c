//perform various operations using function
//program to perform addition, subtraction, multiplication and division using single printf function with user defined values
#include <stdio.h>
int sum(int a, int b)
    {
        return (a+b);
    }
int sub(int a,int b)
    {
        return (a-b);
    }
int mul(int a,int b)
    {
        return (a*b);
    }
int divi(int a,int b)
    {
        return (a/b);
    }
void main()
{
    int a,b,c,r;
    printf("write two numbers");
    scanf("%d%d",&a,&b);
    printf("choose\n1.addition\n2.subtraction\n3.multiplication\n4.division\n");
    scanf("%d",&c);
    
    switch (c)
    {
        case 1:
        r=sum(a,b);
        break;
        
        case 2:
        r=sub(a,b);
        break;
        
        case 3:
        r=mul(a,b);
        break;
        
        case 4:
        r=divi(a,b);
        break;
        
        default:
        printf("invalid");
    }
    
    printf("the result= %d",r);
}
