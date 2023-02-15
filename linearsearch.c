#include<stdio.h>
void main()
{
int a[100],n,s,i;
printf("enter the limits");
scanf("%d",&n);
printf("enter the integers \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element for searching \n");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(s==a[i])
break;
}
if(i<n)
{
printf("enter the number is found %d",i);
}
else
{
printf("enter the element is not found");
}
}
