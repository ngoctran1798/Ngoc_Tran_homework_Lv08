#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,n;
    printf("Nhap n:");
    scanf("%d",&n);
    int *p = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("a[%d]=\n",i+1);
        scanf("%d",p+i);
    }
    printf("Day da nhap:\n");
    for(i=0;i<n;i++)
    {
       printf("%d  ",*(p+i));
    }

}

