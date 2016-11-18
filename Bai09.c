#include <stdio.h>
#include <stdlib.h>
void main()
{
    int k,j,i,*p;
    p = (int *)malloc(10* sizeof(int));
    for(i=2;i<10;i++)
    {

           for(j=0;j<10;j++)
           {
               *(p+j)=i*(j+1);
           }
           for(k=1;k<=10;k++)
        {
            printf("%4d x %4d = %4d\n",i,k,*(p+k-1));
        }
    }
}

