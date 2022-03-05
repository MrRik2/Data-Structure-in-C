#include<stdio.h>
void BubbleSort (int arr[],int size)
{
	int i,j,k,temp,flag=0;
	int y;
	for(i=0; i<size-1; i++)
	{
		for(j=0; j<size-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}			
		}
		if(flag==0)
		{
			break;
		}
	}

	printf("\n\t\t\tAfter Sorting");
		for(k=0; k<size; k++)
		{
			printf("	%d",arr[k]);
		}
	
}
int main()
{
	int arr[5],n,x,y;//= {5,8,3,9,1};
	
	int size=sizeof(arr)/sizeof(arr[0]);
	
	printf("\n\nHow many elements you want to Sorting :");
	scanf("%d",&n);
	
	for(x=0; x<n; x++)
	{
		printf("\nEnter Sorting value :");
		scanf("%d",&arr[x]);
	}
	system("cls");
	printf("\n\n\t\t");
	    for(y=1; y<=15; y++)
		{
			printf("===",y);
			Sleep(75);
		}
	printf("\n\t\t\tBefore Sorting");
	
		for(x=0; x<n; x++)
	{
		printf("	%d",arr[x]);
	}	
	
	
			printf("\n\n\t\t");
	    for(y=1; y<=15; y++)
		{
			printf("===",y);
			Sleep(75);
		}
	
	BubbleSort(arr,size);
	return 0;
} 
