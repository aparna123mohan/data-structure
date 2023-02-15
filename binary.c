#include<stdio.h>
void main()
{
int a[100],n,s,i,low,mid,high;
printf("enter the limit");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the searching element");
scanf("%d",&s);
low=0;
high=n-1;
mid=(low+high)/2;
while (low<=high)
{
if (a[mid]<s)
low = mid+1;
else if(a[mid]==s)
{
printf("found at the location%d",mid=1);
break;
}
else
{
high=mid-1;
mid=(low=high)/2;
}
}
if(low>high)
{
printf("element is not found");
}
}

