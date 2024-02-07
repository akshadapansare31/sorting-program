#include<stdio.h>
#include<stdlib.h>
struct emp
{
	int age;
	char name[20];
}e1[100],t[10];
void mergesort(int low,int mid,int high)
{
	int i,j,k;
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid&&j<=high)
	{
		if(e1[i].age<e1[j].age)
		t[k++]=e1[i++];
		else
		t[k++]=e1[j++];
	}
	while(i<=mid)
	t[k++]=e1[i++];
	while(j<=high)
	t[k++]=e1[j++];
	for(i=low;i<=high;i++)
	e1[i]=t[i];
}
void mergediv(int low,int high)
{
	int mid;
	if(low!=high)
	{
		mid=(low+high)/2;
		mergediv(low,mid);
		mergediv(mid+1,high);
		mergesort(low,mid,high);
	}
}
int main()
{
	FILE*f1,*f2;
	int i=0,n;
	f1=fopen("re.txt","r");
	f2=fopen("se.txt","w");
	if(f1==NULL)
	{
		printf("file not found");
		exit(0);
	}
	while(!feof(f1))
	{
		fscanf(f1,"%s%d",e1[i].age,e1[i].name);
		i++;
	}
n=i-1;
mergediv(0,n-1);
for(i=0;i<n;i++)
{
	fprintf(f2,"\n%s\t%d\t",e1[i].age,e1[i].name);
}
fclose(f1);
fclose(f2);
printf("file copy..");
}
