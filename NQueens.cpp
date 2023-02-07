#include<stdio.h>
#include<math.h>
int x[20];
int place(int k)
{
	int i;
	for(i=1;i<=k-1;i++)
	{
		if(x[i]==x[k] || abs(x[i]-x[k])==abs(i-k))
		{
			return(0);
		}
	}
	return(1);
}
void nqueen(int n)
{
	int i,k;
	k=1;
	while(k>0)
	{
		x[k]=x[k]+1;
		while(x[k]<=n && !place(k))
		{
			x[k]=x[k]+1;
		}
		if(x[k]<=n)
		{
			if(k==n)
			{
				for(i=1;i<=n;i++)
				{
					printf("%d\t",x[i]);
				}
				printf("\n");
			}
			else
			{
				k+=1;
				x[k]=0;
			}
		}
		else
		{
			k=k-1;
		}
	}
}
int main()
{
	int n;
	printf("enter no. of queens:\n");
	scanf("%d",&n);
	printf("possible solutions:\n");
	nqueen(n);
	return 0;
}
