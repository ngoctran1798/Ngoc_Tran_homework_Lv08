#include<stdio.h>
void main()
{
int n,*p,i;
printf("nhap n:\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
*p=*(p+1)=1;
printf("Day Fibonacci:%5d%5d",*(p),*(p+1));
for(i=2;i<n;i++)
{
    *(p+i)=*(p+i-2)+*(p+i-1);
    printf("%5d",*(p+i));
}
}
