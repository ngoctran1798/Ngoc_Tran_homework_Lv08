#include <stdlib.h>
#include <stdio.h>

void main()
{
    int n,i,*p;
    printf("Nhap n:");
    scanf("%d",&n);
    p = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\na[%d]:",i+1);
        scanf("%d",p+i);
    }
    printf("\nCac so chan: ");
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0) printf("%4d",*(p+i));
    }
     printf("\nCac so le: ");
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==1) printf("%4d",*(p+i));
    }
}
