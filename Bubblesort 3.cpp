#include<stdio.h>
int main()
{
	int a[50],n,p,j,temp;
	printf("\n\nEnter number of element you want :");
	scanf("%d",&n);
	
	for(j=0;j<=(n-1);j++)
	{
		printf("Enter any value for a[%d] :",j);
		scanf("%d",&a[j]);
	}
	
	printf("\n\nElements Before Sorting");
	for(j=0;j<n;j++)
	printf("%3d",a[j]);
	
	//sorting section
	
	for(p=1;p<=(n-1);p++)
	{
		for(j=0;j<=(n-p-1);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//output the sorted elements
	
	printf("\n\nElements After Sorting ");
	for(j=0;j<n;j++)
	printf("%3d",a[j]);	
}

