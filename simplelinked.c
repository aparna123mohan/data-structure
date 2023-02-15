#include<stdlib.h>
#include<stdio.h>
void create();
void display();
void insertbeg();
void insertend();
void insertpos();
void deletebeg();
void deleteend();
void deletepos();
struct node
{
int data;
struct node*next;
};
struct node*start=NULL;
int main()
{
int a;
while(1)
{
printf("display choices:\n");
printf("1. create:\n");
printf("2. display:\n");
printf("3. insert at beginning:\n");
printf("4. insert at end:\n");
printf("5. insert at specific position:\n");
printf("6. delete at begning:\n");
printf("7. delete at end:\n");
printf("8. delete at position:\n");
printf("9. exit:\n");
printf("enter your choice:\n");
scanf("%d",&a);
switch(a)
{
case 1: create();
break;
case 2: display();
break;
case 3: insertbeg();
break;
case 4: insertend();
break;
case 5: insertpos();
break;
case 6: deletebeg();
break;
case 7: deleteend();
break;
case 8: deletepos();
break;
case 9: exit(0);
        break;
default :printf("invalid input:\n");
break;

}
}
return 0;
}
void create()
{
struct node *temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("out of memory:\n");
exit(0);
}
printf("enter the data part for node:\n");
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
void display()
{
struct node *ptr;
 if(start==NULL)
 {
printf("List is empty:\n");
     return;
 }
else
{
ptr=start;
printf("\n The List elements are:\n");
 while(ptr!=NULL)
{
 printf("%d\t",ptr->data);
 ptr=ptr->next ;
}
}
}
void insertbeg()
{
        struct node *temp;
       temp=(struct node*)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\n Out of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->data);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
          temp->next=start;
         start=temp;
        }
        }
 void insertend()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\n Out of Memory Space:\n");
                return;
        }
        printf("\n Enter the data value for the node:\t" );
        scanf("%d",&temp->data );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}
void insertpos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\n Out of Memory Space:\n");
                return;
        }
        printf("\n Enter the position for the new node to be inserted:\t");
        scanf("%d",&pos);
        printf("\n Enter the data value of the node:\t");
        scanf("%d",&temp->data) ;
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++)
                {
                        ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\n Position not found:\n");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}
void deletebeg()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\n List is Empty:\n");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\n The deleted element is :%d \t",ptr->data);
                free(ptr);
        }
}
void deleteend()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\n List is Empty:\n");
                exit(0);
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d \t",ptr->data);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\n The deleted element is:%d \t",ptr->data);
                free(ptr);
        }
}
void deletepos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nThe List is Empty:\n");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted:\t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->next ;
                        printf("\n The deleted element is:%d \t",ptr->data);
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++)
                        {
                        temp=ptr; ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("\nPosition not Found:\n");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("\nThe deleted element is:%d\t",ptr->data );
                        free(ptr);
                }
        }
}



