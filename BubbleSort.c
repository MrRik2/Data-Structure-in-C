
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
	int arr[]= {51,78,33,9,88},i;
	
	printf("\n\t\t\tBefore Sorting");
	for(i=0;i<5;i++)
		{
			printf("	%d",arr[i]);
		}
	int size=sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,size);
	return 0;
} 


