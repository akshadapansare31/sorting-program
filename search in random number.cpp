#include<stdio.h>
#include<stdlib.h>
int main()
{
        int a[100],i, n,x;
        int search(int a[100],int x,int n);
        printf("enter limit :");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        a[i]=rand()%100;
        }
        printf("random no :");
        for(i=0;i<n;i++)
        {
        printf("%d\t",a[i]);
        }
        printf("enter number to search :");
        scanf("%d",&x);
        x=search(a,x,n);
        if(x==-1)
        printf("number is not found :");
        else 
        printf("number is found at position =%d",x);
        }
        int search(int a[100],int x,int n)
        {
                int i;
                for(i=0;i<n;i++)
                {
        if(a[i]==x)
        {
                return i;
        }
}
        return -1;
        }
        
        
