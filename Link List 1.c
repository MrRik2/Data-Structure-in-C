#include<stdio.h>
#include<stdlib.h>
void append();
void display();
struct node
{
	int data;
	struct node *link;
};
struct node *root=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("\nPress 1 for Append ");
		printf("\nPress 2 for Display ");
		printf("\nPress 3 for Exit \n");
		
		printf("Press Here  :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				append();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
		}
	}
}

void append()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter The Data  :");
	scanf("%d",&temp ->data);
	temp ->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node *p=root;
		while(p ->link !=NULL)
		{
			p=p ->link;
		}
		p ->link=temp;
	}
} 
void display()
{
	struct node *p=root;
	if(p==NULL)
	{
		printf("\n\nList Is Empty...\n");
	}
	else
	{
		printf("\n\nAll Data  ");
		while(p!=NULL)
		{
			printf("	%d",p ->data);
			p=p -> link;
		}
	}
}
