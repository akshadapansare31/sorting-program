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
void insertion(struct Emp e1[100],int n)
{
	int i,j;
	char key[20];
	for(i=1;i<n;i++)
	{
	   	strcpy(key,e1[i].ename);
		for(j=i-1;j>=0&&strcmp(key,e1[j].ename)<0;j--)
		{
			t=e1[j+1];
			e1[j+1]=e1[j];
			e1[j]=t;
		}
	}
printf("\n Insertion Sort\n");
	for(i=0;i<n;i++)
	{
     printf("\n %s",e1[i].ename);
    }  
}
int main()
{
	FILE *f1;
	int i=0,n;
	f1=fopen("e2.txt","r");
	if(f1==NULL)
	{
		printf("File not found");
		exit(0);
	}
	while(!feof(f1)) 
	{
	fscanf(f1,"%s",&e1[i].ename);
	i++;
	}
	n=i-1;
	bubble(e1,n);
//	insertion(e1,n);
		fclose(f1);
}

