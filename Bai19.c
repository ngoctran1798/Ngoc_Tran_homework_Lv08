#include <stdlib.h>
#include <stdio.h>
void main()
{
    int n,k,i;
    printf("Nhap n,k:");
    scanf("%d%d",&n,&k);
    printf("\nCac so chia het cho k la:");
    for(i=1;i<=n;i++)
    {
        if(i%k==0) printf("%d  ",i);
    }
}

