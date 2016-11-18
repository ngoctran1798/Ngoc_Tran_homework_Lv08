#include <stdio.h>
void main()
{
    int i,n,min,max;
    printf("Nhap n:");
    scanf("%d",&n);
    int *p = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\n a[%d]:",i+1);
        scanf("%d",p+i);
    }
    max = min = *p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>max) max = *(p+i);
    }

    for(i=0;i<n;i++)
    {
        if(*(p+i)<min) min = *(p+i);
    }
    printf("Max = %d\nMin = %d\n",max,min);
}

