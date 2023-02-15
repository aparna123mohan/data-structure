#include<stdio.h>
void main()
{
int n1,n2,n3;
int a[100],b[100],c[100],temp,i,j;
printf ("enter the limit in the first array");
scanf("%d",&n1);
printf("enter the array element\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the limit in the second array");
scanf("%d",&n2);
printf("enter the array element \n");
for (i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}
n3=n1+n2;
for(i=0;i<=n1;i++)
{
c[i]=a[i];
}
for(i=0;i<=n2;i++)
{
c[i+n1]=b[i];
}
for(i=0;i<=n3;i++)
{
printf("%d",c[i]);
}
printf("\n final array after sorting\n");
for(i=0;i<n3;i++)
{
for(j=i+1;j<n3;j++)
{
if(c[i]<c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
}
}
}
for(i=0;i<n3;i++)
{
printf("%4d",c[i]);
}
}
