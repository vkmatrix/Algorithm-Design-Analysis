#include<stdio.h>
int n,cost[20][20],i,j,k;
void ap()
{
	int a[10][10];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			a[i][j]=cost[i][j];
		}
	}
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]<(a[i][k]+a[k][j]))
				{
					a[i][j]=a[i][j];
				}
				else
				{
					a[i][j]=a[i][k]+a[k][j];
				}
			}
		}
		printf("STEP %d---->\n",k);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	}
}
int main()
{
	printf("*** ALL PAIRS SHORTEST PATH ALGORITHM ***\n");
	printf("enter no. of nodes:\n");
	scanf("%d",&n);
	printf("enter the cost matrix(for infinity---->9999):\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
		}
	}
	ap();
}
