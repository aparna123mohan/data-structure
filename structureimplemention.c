#include<stdio.h>
struct myStructure
{
int myNum;
char myLetter;
};
void main()
{
struct myStructure s1;
s1.myNum =65;
s1.myLetter ='A';
printf("My number :%d\n",s1.myLetter);
printf("my letter:%c\n",s1.myLetter);
}
