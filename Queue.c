#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
struct node
{
	int data;
	struct node* link;
};
struct node *head=NULL , *tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("\n\n=====================Queqe Operation=========================\n");
		printf("\n1.Enqueue Operation");
		printf("\n2.Dequeue Operation");
		printf("\n3.Display Operation");
		printf("\n4.Exit");
		
		printf("\nEnter your Option  :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}
	getch();
return 0;
}

void enqueue()
{
	struct node *newnode = NULL;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data :");
	scanf("%d",& newnode -> data);
	
	newnode -> link = NULL;
	if(head==NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		tail -> link = newnode;
		tail = newnode;
	}
}
void dequeue()
{
	if(head == NULL)
	{
		printf("\nQueue is empty...");
	}
	else
	{
		struct node *temp = head;
		printf("Dequeue element is %d",temp -> data);
		temp -> link = NULL;
		free(temp);
	}
}
void display()
{
	if(head == NULL)
	{
		printf("\nQueue is eempty...");
	}
	else
	{
		struct node *temp = head;
		while(temp !=NULL)
		{
			printf("%d\t",temp->data);
			temp = temp -> link;
		}
	}

}
