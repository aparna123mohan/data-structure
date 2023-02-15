#include<stdio.h>
void push(int);
void pop();
void peek();
int r,front=-1,rear=-1,s=3,a[100],x;

void main()
{
push(5);
push(2);
push(6);
pop();
//printf("poped element %d",p);
peek();
}


void push(int data)
{
if(rear==s-1)
printf("full");
else
{
if(front==-1)
front=0;
rear=rear+1;
a[rear]=data;
printf("\ninserted element : %d\n",data);
}
}

void pop()
{
if(front==-1)
printf("empty");
else
{
printf("\ndeleted element =%d\n",a[front]);
front=front+1;
if(front>rear)
rear=front=-1;
//return r;
}
}

void peek()
{
if((rear<0))
printf("empty");
else
{
int i;
int q=a[rear];
printf("\npeak %d\n",q);
}
}
