#include<stdio.h>
void Merge(int a[],int l,int mid,int h)
{
	int b[h+1];
	int i,j,k;
	i=l;
	j=mid+1;
	k=l;
	while(i<=mid && j<=h)
	{
		if(a[i]<a[j])
		{
			b[k++]=a[i++];
		}
		else
		{
			b[k++]=a[j++];
		}
	}
	while(i<=mid)
	{
		b[k++]=a[i++];
	}
	while(j<=h)
	{
		b[k++]=a[j++];
	}
	for(i=l;i<=h;i++)
	{
		a[i]=b[i];
	}
}
void MergeSort(int a[],int l,int h)
{
	int mid;
	if(l<h)
	{
		mid=(l+h)/2;
		MergeSort(a,l,mid);
		MergeSort(a,mid+1,h);
		Merge(a,l,mid,h);
	}
}

int main()
{
	int a[]={11,4,5,23};
	int n=4,i;
	MergeSort(a,0,n-1);
	for(i=0;i<4;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
