//read and print a 2*2 matrix
#include <stdio.h>
void main()
{
    int i,j,a[2][2];
    printf("write 4 elements");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
