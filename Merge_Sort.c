#include<stdio.h>
void merge(int a[],int temp[],int left,int mid,int right)
{
	int i,left_end,size,temp_pos;
	left_end=mid-1;
	temp_pos=left;
	size=right-left+1;
	while((left<=left_end)&&(mid<=right))
	{
		if(a[left]>a[mid])
		{
			temp[temp_pos]=a[left];
			temp_pos=temp_pos+1;
			left=left+1;
		}
		else
		{
           temp[temp_pos]=a[mid];
           temp_pos=temp_pos+1;
           mid=mid+1;
		}
	}
	while(left<=left_end)
	{
		temp[temp_pos]=a[left];
		left=left+1;
		temp_pos=temp_pos+1;
	}
	while(mid<=right)
	{
		temp[temp_pos]=a[mid];
		mid=mid+1;
		temp_pos=temp_pos+1;
	}
	for(i=0;i<=size;i++)
	{
		a[right]=temp[right];
		right=right-1;
	}
}

void mergeSort(int a[],int temp[],int left,int right)
{
	int mid;
	if(right>left)
	{
		mid=(left+right)/2;
		mergeSort(a,temp,left,mid);
		mergeSort(a,temp,mid+1,right);
		merge(a,temp,left,mid+1,right);
	}
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],temp[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergeSort(a,temp,0,n-1);
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
return 0;
}
	
