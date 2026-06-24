#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],size,i,pos,element;
	printf("Hello world ");
	printf("enter size of array=");
	scanf("%d",&size);
	printf("enter the array elements=");
	for(i=0;i<size;i++)
	{
		 scanf("%d",&a[i]);
	}
	printf("enter position to insert element=");
	scanf("%d",&pos);
	printf("enter element you want to insert=");
	scanf("%d",&element);
	for(i=size-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=element;
	size++;
	printf("array after insertion=");
	for(i=0;i<size;i++)
	{
		 printf("%d",a[i]);
	}
return 0;
}