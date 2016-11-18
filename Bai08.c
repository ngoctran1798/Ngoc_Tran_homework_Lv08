#include<stdio.h>
void main()
{
int n,i;
printf("Nhap n:\n");
scanf("%d",&n);
float s=0;
for(i=1;i<=n;i++)
{
    s+=(float)1/i;
}
printf("S=%.2f",s);

}

