#include<stdio.h>
void main()
{
int n,*p,i,s=0;;
printf("Nhap n:\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
*p=0;
for(i=0;i<n;i++)
{
    printf("a[%d]=",i+1);
    scanf("%d",p+i);
}
for(i=0;i<n;i++)
{
    s+=*(p+i);
}
printf("Tong la: S = %d",s);
}

