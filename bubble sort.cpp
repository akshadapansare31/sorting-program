#include<stdio.h>
void accept(int a[100],int n)
{
	int i;
	printf("enter n numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
}
void display(int a[100],int n)
{
	int i;
	printf("enter in array");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
void bubbles(int a[100],int n)
{
	int i,pass,t;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass-1;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
}
int main()
{
	int a[100],i,n;
	printf("enter limit:");
	scanf("%d",&n);
	accept(a,n);
	display(a,n);
	bubbles(a,n);
	printf("sorted array:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}

