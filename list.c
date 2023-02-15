#include<stdlib.h>
#include<stdio.h>
void insertbeg()
{
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\nOut of Memory Space:\n");
return ;
{
printf("\nEnter the data value for the node:\t");
scanf("%d",&temp->data);
temp->next=NULL;
if(start==NULL)
{
start=temp;
}
else
{
ptr=start;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
}
}

