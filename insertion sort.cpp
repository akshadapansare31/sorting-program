#include<stdio.h>
void accept(int a[],int n)
{
        int i;
        printf("enter n numbers:");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
}
void display(int a[],int n)
{
        int i;
        printf("elements in an array:");
        for(i=0;i<n;i++)
        {
                printf("%d\t",a[i]);
        }
}

void insertion(int a[],int n)
{
	int i,j,k;
	for(i=1;i<n;i++)
	{
		k=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(k<a[j])
			a[j+1]=a[j];
			else
			break;
		}
		a[j+1]=k;
	}
}
int main()
{
	int i,a[100],n;
	printf("enter limit:");
	scanf("%d",&n);
	accept(a,n);
	display(a,n);
	insertion(a,n);
	printf("sorted array:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
