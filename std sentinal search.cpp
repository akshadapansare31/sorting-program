#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct city
{
	char name[20];
	int code;
}ct[20];
int readfile(struct city a[])
{
	int i=0;
	FILE *fp;
	if((fp=fopen("city1.txt","r"))!=NULL)
	{
		while(!feof(fp))
		{
			fscanf(fp,"%s%d",&a[i].name,&a[i].code);
			i++;
		}
	}
	return i-1;
}
void sentinalsearch(struct city a[10],int n,char s1[20])
{
	int i,ct=0;
	
	while(strcmp(s1,a[i].name)!=0)
	{
		i++;
	}
if(i<n)
	printf("city is found and std code is  %d",a[i].code);
else
	printf("city is not found");
}
int main()
{
	int n;
	char s1[20];
	n=readfile(ct);
	if(n==-1)
		printf("file not found");
	else
	{
		printf("enter city name  to search");
		scanf("%s",s1);
		sentinalsearch(ct,n,s1);
	}
}
