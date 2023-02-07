#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
void QuickSort(int a[],int left,int right)
{
	int i,j,pivot;
	i=left;
	j=right;
	pivot=a[(i+j)/2];
	while(i<=j)
	{
		while(a[i]<pivot)
		{
			i++;
		}
		while(a[j]>pivot)
		{
			j--;
		}
		if(i<=j)
		{
			swap(&a[i],&a[j]);
			i++;
			j--;
		}
		if(left<j)
		{
			QuickSort(a,left,j);
		}
		if(i<right)
		{
			QuickSort(a,i,right);
		}
	}
}

int main()
{
	int a[]={23,3,12,9,7};
	int n=5,i;
	QuickSort(a,0,4);
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
