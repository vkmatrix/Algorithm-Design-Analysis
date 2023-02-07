#include<stdio.h>
int max(int a,int b)
{
	return (a>b)? a: b;
}
int ks(int w,int wt[],int val[],int n)
{
	if(n==0 || w==0)
	{
		return 0;
	}
	if(wt[n-1]>w)
	{
		return ks(w,wt,val,n-1);
	}
	else
	{
		return max(val[n-1]+ks(w-wt[n-1],wt,val,n-1),ks(w,wt,val,n-1));
	}
}
int main()
{
	int w,i,wt[10],val[10],n;
	printf("enter the no. of objects:\n");
	scanf("%d",&n);
	printf("enter knapsack capacity:\n");
	scanf("%d",&w);
	printf("enter their weights and profits:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&wt[i],&val[i]);
	}
	printf("%d\n",ks(w,wt,val,n));	
	return 0;
}

