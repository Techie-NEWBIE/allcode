#include<stdio.h>
void bubble(int a[],int);
void main()
{
	int a[100],n,i,j;
	printf("\nEnter no of elements");
	scanf("%d",&n);
	printf("\nEnter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	bubble(a,n);
	printf("\nUnsorted array");
	
}
   
void bubble(int a[],int n)
{
	int t,j,i;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			}
		}
	}
		 printf("\n Sorted array");
	
		for(i=0;i<n;i++)
		{
			printf("\t%d",a[i]);
		}
}
}



	
	

