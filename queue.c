#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <stdbool.h>
#define Max 6
int intArray[Max];
int front =0;
int rear=-1;
int itemCount=0;
int peek()
{
return intArray[front];
}
bool isEmpty()
{
return itemCount ==0;
}
bool isfull()
{
return itemCount ==Max;
}
int size()
{
return itemCount;
}
void insert(int data)
{
if(!isfull())
{
if(rear==Max)
{
rear=-1;
}
intArray[++rear]=data;
itemCount++;
}
}
int removeData()
{
int data= intArray[front++];
if(front==Max)
{
front=0;
}
itemCount--;
return data;
}
int main()
{
insert(3);
insert(5);
insert(9);
insert(1);
insert(12);
insert(15);
if (isfull())
{
printf("Queue is full!\n");
}
int num=removeData();
printf("element removed:%d\n",peek());
insert(16);
insert(17);
insert(18);
printf("____________________\n");
printf("index : 5  4 3 2 1 0 \n");
printf("____________________\n");
printf("Queue: ");
while (!isEmpty())
{
int n=removeData();
printf("%d",n);
}
}
