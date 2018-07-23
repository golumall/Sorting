#include<stdio.h>
void bubbleSort(int n)
{
	int a[n],i,j,temp;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<=i-1;j++)
		{
            if(a[j]>a[j+1])
            {
            	temp=a[j];
            	a[j]=a[j+1];
            	a[j+1]=temp;
            }
		}
	}
	printf("Sorted Element..\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
int main()
{
	int n;
	scanf("%d",&n);
	bubbleSort(n);
	return 0;
}
