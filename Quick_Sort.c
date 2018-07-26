    #include<stdio.h>
     void swap(int a[],int left,int right)
	{
		int temp=0;
		temp=a[left];
		a[left]=a[right];
		a[right]=temp;
	}
    int partition(int a[],int low,int high)
	{
		int left,right,pivot_item=a[low];
		left=low;
		right=high;
		while(left<right)
		{
			while(a[left]<=pivot_item)
				left++;
			while(a[right]>pivot_item)
				right--;
			if(left<right)
				swap(a,left,right);
		}
		a[low]=a[right];
		a[right]=pivot_item;
		return right;
	}
	 void quick_sort(int a[],int low,int high)
	{
		int pivot;
		if(high>low)
		{
			pivot=partition(a,low,high);
			quick_sort(a,low,pivot-1);
			quick_sort(a,pivot+1,high);
		}
	}
	
	
int  main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	quick_sort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
return 0;
}
