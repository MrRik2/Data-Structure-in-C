#include<stdio.h>
void Selectionsort(int arr[],int size)
{
	int i,j,temp,min;
	for(i=0;i<size;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
		printf("\n\n\t\tAfter Sorting");
	for(i=0;i<size;i++)
	{
		printf("	%d",arr[i]);
	}
}
int main()
{
	int arr[]={2,5,8,7,1,9};
	int size,i;
	size=sizeof(arr)/sizeof(arr[0]);

	printf("\n\n\t\tBefore Sorting");
		for(i=0;i<6;i++)
	{
		printf("	%d",arr[i]);
	}
	Selectionsort(arr,size);
	return 0;
}
