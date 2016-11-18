#include<stdio.h>
void main(){
int n,i,*p;
printf("Nhap n:\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
    printf("a[%d]=",i+1);
    scanf("%d",p+i);
}
int max,min;
max=min=*p;
for(i=0;i<n;i++)
{
    if(*(p+i)>max) max=*(p+i);
    if(*(p+i)<min) min=*(p+i);
}
printf("max=%d\nmin=%d\n",max,min);
}

