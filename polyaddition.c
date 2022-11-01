#include<stdio.h>
struct poly
{
int coeff;
int expo;
};
int Polynomialaddition(struct poly x1[], struct poly x2[],int m,int n,struct poly x3[])
{
 int i,j,k;
 i=0,j=0,k=0;
 while(i<m && i<n)
{
if(x1[i].expo==x2[j].expo)
 {
 x3[k].coeff=x1[i].coeff+x2[i].coeff;
 x3[k].expo=x1[i].expo;
 i++;
 j++;
 k++;
 }
else if(x1[i].expo>x2[j].expo)
 {
 x3[k].coeff=x1[i].coeff;
 x3[k].expo=x1[i].expo;
 j++;
 k++;
 }
else
 {
 x3[k].coeff=x2[j].coeff;
 x3[k].expo=x2[j].expo;
 j++;
 k++;
 }
}
while(i<m)
 {
 x3[k].coeff=x1[i].coeff;
 x3[k].expo=x2[i].expo;
 i++;
 k++;
 }
while (j<n)
 {
 x3[k].coeff=x2[j].coeff;
 x3[k].expo=x2[j].expo;
 j++;
 k++;
 }
 return k;
}
void main()
{
struct poly x1[20],x2[20],x3[20];
int k, n,m,i,res;
printf("Enter the size of the two polynomials");
scanf("%d%d",&m,&n);
printf("Enter the coefficents of the first polynimial");
for(i=0;i<m;i++)
{
scanf("%d",&x1[i].coeff);
}
printf("Enter the exponents of the first polynimial");
for(i=0;i<m;i++)
{
scanf("%d",&x1[i].expo);
}
printf("Enter the coefficients of the second polynomial");
for(i=0;i<n;i++)
{
scanf("%d",&x2[i].coeff);
}
printf("Enter the exponents of the second polynomial");
for(i=0;i<n;i++)
{
scanf("%d",&x2[i].expo);
}

res= Polynomialaddition(x1,x2,m,n,x3);
for(k=0;k<n;k++)
{
printf("%d(x^%d)+",x3[k].coeff,x3[k].expo);
}
}

