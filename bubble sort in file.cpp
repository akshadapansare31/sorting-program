#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct emp
{
	char ename[20];
	int age;
}e1[100],t;
void bubble(struct emp e1[100],int n)
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
	printf("\n bubble sort \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s",e1[i].ename,e1[i].age);
	}
}
int main()
{
	FILE *f1;
	int i=0,n;
	f1=fopen("emp.txt","r");
	if(f1==NULL)
	{
		printf("file not found");
		exit(0);
	}
	while(!feof(f1))
	{
		fscanf(f1,"%d%s",&e1[i].ename,e1[i].age);
		i++;
	}
    n=i-1;
	bubble(e1,n);
	fclose(f1);
}
