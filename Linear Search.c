#include<stdio.h>
int main()
{
	int list[]={1,2,3,4,5,6,7,8,9,10};
	int ele,i,size,status=0;
	size=sizeof(list)/sizeof(list[0]);
	printf("\n\n\tEnter any Element  :");
	scanf("%d",&ele);
	
	for(i=0;i<size;i++)
	{
		if(ele==list[i])
		{
			status=1;
			break;
		}
	}
	if(status==1)
	{
		printf("\n\n\tElement Found\n");
	}
	else
	{
		printf("\n\n\tElement Not Found\n");
	}
	
	return 0;
}
