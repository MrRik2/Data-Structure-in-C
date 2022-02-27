#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
int isFull();
int isEmpty();
void peek();
void pop();
void display();
void push(int);
#define N 5
int stack[N];
int top=-1;
int main()
{
	int ch,ele;
	while(1)
	{
		printf("\n\tPress 1 for Push\n");
		printf("\tPress 2 for Pop\n");
		printf("\tPress 3 for Peek\n");
		printf("\tPress 4 for Display\n");
		printf("\tPress 5 for Exit\n");
		
		printf("\n\n\tEnter Your Option  :");
		scanf("%d",&ch);
		system("cls");
		
		switch(ch)
		{
			case 1:
				printf("\n\t\tEnter an element  :");
				scanf("%d",&ele);
				push(ele);
				system("cls");
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("\n\n\n\t\t\tPlease enter avalid option\n");
				sleep(2);
				system("cls");											
		}
	}	
	return 0;
}
void push(int ele)
{
	if(isFull())
	{
		printf("\n\n\n\t\t\tStack Overflow\n");
		sleep(1);
		system("cls");
	}
	else
	{
		top=top+1;
		stack[top]=ele;
	}
}
void pop()
{
	int ele;
	if(isEmpty())
	{
		printf("\n\n\n\t\t\tStack Underflow\n");
		sleep(2);
		system("cls");
	}
	else
	{
		printf("\n\n\n\t\t\tPoped item is %d\n",stack[top]);
		top--;
		sleep(2);
		system("cls");
	}
}
int isFull()
{
	if(top==N-1)
	return 1;
	else
	return 0;
}
int isEmpty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
void peek()
{
	printf("\n\n\n\t\t\tTop element is %d\n",stack[top]);
	sleep(2);
	system("cls");
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("	%d",stack[i]);
	}
	sleep(2);
	system("cls");
}        
