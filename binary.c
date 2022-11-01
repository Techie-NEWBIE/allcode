#include<stdio.h>
int binary_search(int a[],int n,int key)
{
int left=0,right=n-1,mid;
while(left<=right)
{
mid=(left+right)/2;
if (a[mid]<key)
left =mid+1;
else if (a[mid]>key)
right=mid-1;
else
return mid;
}
return -1;
}
void main()
{
int a[20],n,i,j,key,temp=0,search;
printf("enter the size of the array");
scanf("%d",&n);
printf("Enter the elements in the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
printf("Enter the number to search in the array");
scanf("%d",&key);
search=binary_search(a,n,key);
if(search==-1)
printf("%d is not present the array",key);
else
printf("%d is found at postition %d",key,search);
}
