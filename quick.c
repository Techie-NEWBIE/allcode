#include <stdio.h>
void quickSort( int[], int, int);
int partition ( int[], int, int);
void main()
{
int i,a[] = { 7, 12, 1, -2, 0, 15, 4, 11, 9};
printf("\n\nUnsorted array is: ");
for (i = 0; i < 9 ; i )
printf("%d ", a[i]);
quickSort( a, 0, 8);
printf("\n\nSorted array is: ");
for (i = 0 ; i < 9; i++)
printf("%d ", a[i] ) ;
}
void quickSort( int a[], int l, int r)
{
int j;
if (l < r)
{
j = partition( a, 1, r);
quickSort( a, 1, j-1);
quickSort( a,j+1,r);
}
}
int partition(int a[], int l, int r)
{
int pivot, i, j, t;
pivot = a[1] ;
i = 1 ;
j = r + 1 ;
while ( 1)
{
do
{
++i ;
} while (a [i] <= pivot && i<=r);
do {
--j;
} while(a[j] > pivot );
if( i >= j ) break;
t = a[i];
a[i]=a[j];
a[j] = t;
}
t = a[1] ;
a[l] = a[j] ;
a[j] = t;
return j;
}

