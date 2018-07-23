#include<stdio.h>
void insertionSort(int n)
{
	int a[n],i,j,temp;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i;
		while(a[j-1]>temp&&j>=1)
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=temp;
	}
	printf("Sorted Element..\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
int main()
{
	int n;
	scanf("%d",&n);
	insertionSort(n);
	return 0;
}
