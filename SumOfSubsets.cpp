#include<stdio.h>
#include<stdlib.h>
int w[10],x[10],d;
void SumOfSubsets(int s,int k,int r)
{
	int i;
	static int b=1;
	x[k]=1;
	if(s+w[k]==d)
	{
		printf("subset %d ----->\n",b++);
		for(i=1;i<=k;i++)
		{
			if(x[i]==1)
			{
				printf("%d\t",w[i]);
			}
		}
	}
	else if(s+w[k]+w[k+1]<=d)
	{
		SumOfSubsets(s+w[k],k+1,r-w[k]);
	}
	if(s+r-w[k]>=d && s+w[k+1]<=d)
	{
		x[k]=0;
		SumOfSubsets(s,k+1,r-w[k]);
	}
}
int main()
{
	int i,n,sum=0;
	printf("enter no. of elements:\n");
	scanf("%d",&n);
	printf("enter them in ascending order:\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&w[i]);
		sum=sum+w[i];
	}
	printf("enter desired value:\n");
	scanf("%d",&d);
	if(sum<d || w[1]>d)
	{
		printf("no solutions\n");
		return 1;
	}
	SumOfSubsets(0,1,sum);
	return 0;
}
