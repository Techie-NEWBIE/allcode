#include<stdio.h>
int linearsearch(int[],int,int);
void main()
{
int a[20],n,i,p,key;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to  be searched: ");
scanf("%d",&key);
p=linearsearch(a,n,key);
printf("The element %d is found at index %d.\n",key,p);
}
int linearsearch(int a[],int n,int key)
{
int loc;
loc=0;
while(loc<n)
{
if(a[loc]==key)
{
return loc;
}
loc++;
}
return -1;
}
