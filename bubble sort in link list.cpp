#include<stdio.h>
#include<stdlib.h>
#define memory (node*)malloc(sizeof(node))
typedef struct node
{
	int data;
    struct node *next;
}node;
node *create(node *list)
{
	int i,n;
	node *newnode, *temp;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	newnode=memory;
	printf("enter value");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(list==NULL)
	{
		list=newnode;
		temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
}
return list;
}
void disp(struct node *list)
{
	node *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
{
	printf("%d\t",temp->data);
}
}
node *bubblesort(node *list)
{
	int temp;
	node *i,*j;
	for(i=list;i!=NULL;i=i->next)
	{
		for(j=list;j!=i;j++)
		if(i->data>j->data)
		{
			temp=i->data;
			i->data=j->data;
			j->data=temp;
		}
	}
	return list;
}
int main()
{
	node *list=NULL;
	list=create(list);
	disp(list);
	printf("\n the sorted link list");
	list=bubblesort(list);
	disp(list);
}
