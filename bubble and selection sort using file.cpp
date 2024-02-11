#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Emp
{ 
  char ename[20];	
}e1[100],t;	
void bubble(struct Emp e1[100],int n)
{
	int i,pass;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(strcmp(e1[i].ename,e1[i+1].ename)>0)
			{
				t=e1[i];
				e1[i]=e1[i+1];
				e1[i+1]=t;
			}
		}
	}
printf("\n Bubble Sort\n");
	for(i=0;i<n;i++)
	{
     printf("\n %s",e1[i].ename);
    }  
}
void selection(struct Emp e1[100],int n)
{
	int i,j,index;
	char min[20];
	for(i=0;i<n;i++)
	{
	   	strcpy(min,e1[i].ename);
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(e1[j].ename,min)<0)
			{
				strcpy(min,e1[j].ename);
				index=j;
			}
		}
		t=e1[i];
		e1[i]=e1[index];
		e1[index]=t;
	}
printf("\n selection Sort\n");
	for(i=0;i<n;i++)
	{
     printf("\n %s",e1[i].ename);
    }  		
}
int main()
{
	FILE *f1;
	int i=0,n;
	f1=fopen("e1.txt","r");
	if(f1==NULL)
	{
		printf("File not found");
		exit(0);
	}
	while(!feof(f1)) 
	{
	fscanf(f1,"%s%d",&e1[i].ename);
	i++;
	}
	n=i-1;
	bubble(e1,n);
//	selection(e1,n);
		fclose(f1);
}
