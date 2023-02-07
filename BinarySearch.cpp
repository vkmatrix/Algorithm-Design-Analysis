#include<stdio.h>
void BinarySearch(int a[],int l,int h,int key)
{
	int found,mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]==key)
		{
			found=1;
			printf("found!!!\n");
			break;
		}
		else if(key<a[mid])
		{
			h=mid-1;
		}
		else if(key>a[mid])
		{
			l=mid+1;
		}
	}
	if(!found)
	{
		printf("not found!!!\n");
	}
}
int main()
{
	int a[]={1,2,4,8};
	int key=1;
	BinarySearch(a,0,3,key);
	return 0;
}
