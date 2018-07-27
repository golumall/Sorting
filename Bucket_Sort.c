#include<stdio.h>
void bucketSort(int a[],int n)
{
	int i,j,k;
	int bucket[n];
	for(j=0;j<n;j++)
		bucket[j]=0;
	for(i=0;i<n;i++)
		++bucket[a[i]];
	for(i=0,j=0;j<n;j++)
		for(k=bucket[j];k>0;--k)
			a[i++]=j;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bucketSort(a,n);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}
