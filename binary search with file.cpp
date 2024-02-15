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
	if((fp=fopen("sw.txt","r"))!=NULL)
	{
		while(!feof(fp))
		{
			fscanf(fp,"%s%d",&a[i].name,&a[i].code);
			i++;
		}
	}
	return i-1;
}
int binarysearch(struct city a[10],int top,int bottom,char s1[20])
{
	int mid=0;
	while(top<=bottom)
	{
		mid=top+bottom/2;
		
		if(strcmp(a[mid].name,s1)==0)
		return mid;
		else if(strcmp(s1,a[mid].name)<0)
		bottom=mid-1;
		else
		top=mid+1;
	}
	return -1;
}
int main()
{
	int n,p;
	char s1[20];
	n=readfile(ct);
	if(n==-1)
	printf("file not found");
	else
	{
		printf("enter city name to search");
		scanf("%s",s1);
		p=binarysearch(ct,0,n,s1);
		if(p>=0)
		printf("\n city is found and code=%d",ct[p].code);
		else
		printf("\n city not found");
	}
	
}
