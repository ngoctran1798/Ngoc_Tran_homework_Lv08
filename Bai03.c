#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,j,n,t;
    printf("Nhap n:\n");
    scanf("%d",&n);
    int *p = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\na[%d]:",i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        t = *(p+i);
        for(j=i+1;j<n;j++)
        {
            if(t > *(p+j))
            {
                *(p+i) = *(p+j);
                *(p+j) = t;
                t = *(p+i);
            }
        }
    }
    printf("\n sap xep:");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
}

