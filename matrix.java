import java.util.Scanner;
class matrixmul
{
public static void main(String[]args)
{
	Scanner n=new Scanner(System.in);
	System.out.println("Enter the number of rows and colums of an array1");
	int r1 = n.nextInt();
	int c1 = n.nextInt();
	System.out.println("Enter the number of rows and colums of an array2");
	int r2 = n.nextInt();
	int c2 = n.nextInt();
	int a[][]=new int[r1][c1];
	int b[][]=new int[r2][c2];
	int c[][]=new int[r1][c2];
	
	if (r1!=c2)
	System.out.println("Error");
	else
	System.out.print("Enter the elements in matrix1");
	for(int i=0;i<r1;i++)
	{
	for(int j=0;j<c1;j++)
	{
	a[i][j]=n.nextInt();
	}
	}
	System.out.println("Enter elements of matrix2");
	for(int i=0;i<r2;i++)
	{
	for(int j=0;j<c2;j++)
	{
	b[i][j]=n.nextInt();
	}
	}
	for(int i=0;i<r1;i++)
	{
	for(int j=0;j<c2;j++)
	{
	for(int k=0;k<c1;k++)
	{
	c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
	}
	}
	}
	for(int i=0;i<r1;i++)
	{
	for(int j=0;j<c2;j++)
	{
	System.out.print(c[i][j]+" ");
	}
	System.out.print("\n");
	}
	}
	}


