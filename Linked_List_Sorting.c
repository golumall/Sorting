#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;
int n;
void printlist()
{
	struct node *temp;
	temp=head;
 while(temp!=NULL)
 {
 	printf("%d\t",temp->data);
 	temp=temp->next;

 }
}
void sort()
{
struct node *temp1,*temp2,*temp3;
temp1=head;
int j;
while(temp1!=NULL)
{
	temp2=temp1;
	for(temp3=temp1->next;temp3!=NULL;temp3=temp3->next)
	{
      if(temp2->data>temp3->data)
      {
      	j=temp2->data;
      	temp2->data=temp3->data;
      	temp3->data=j;
      }
	}
	temp1=temp1->next;
}
}
int main()
{
	int i,ele;
	struct node *newnode,*temp;
	scanf("%d",&n);
	head=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&ele);
    head->data=ele;
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++)
    {
    	newnode=(struct node*)malloc(sizeof(struct node));
    	scanf("%d",&ele);
    	newnode->data=ele;
    	newnode->next=NULL;
    	temp->next=newnode;
    	temp=temp->next;
    }
    
   sort();
   printlist();
	return 0;
}
