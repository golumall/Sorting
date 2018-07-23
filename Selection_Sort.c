#include<stdio.h>
void bubbleSort(int n)
{
	int a[n],i,j,temp;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
            if(a[i]>a[j])
            {
            	temp=a[i];
            	a[i]=a[j];
            	a[j]=temp;
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
