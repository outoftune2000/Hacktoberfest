#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node * link;
};struct node* head=NULL;

void push()
{
struct node *temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the value");
scanf("%d",&temp->data);
ptr=head;
if (head==NULL)
	{
        head=temp;
	head->link=NULL;
	}
else{
	while(ptr->link!=NULL)
		{ptr=ptr->link;}
	temp->link=NULL;
	ptr->link=temp;}
}

int pop()
{struct node *ptr,*delnode,*prev;
int delitem;
ptr=head;
while(ptr->link!=NULL)
	
	{prev=ptr;ptr=ptr->link;}				
delitem =ptr->data;
free(ptr);
prev->link=NULL;
free(delnode);
return delitem;}

void display()
{struct node *ptr;
ptr=head;
while(ptr->link!=NULL)
{printf("%d",ptr->data);
ptr=ptr->link;}
printf("%d",ptr->data);}



int main()
{

int item,n,m;

while(1){
printf("enter 1 to push 2 for pop 3 for display");
scanf("%d",&n);
switch(n)
{ case(1):
	
	{
	
	push();
	
	 break;}
 case (2):
	
{
	printf("the poped value is %d",pop());
	break;}
 case(3):
	{
        display();
	break;}
}
printf("enter 1 to continue");
	scanf("%d",&m);
	if (m!=1)
	 break;}
return 0;}






