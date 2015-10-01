#include<stdio.h>
void main()
{

int a[10],n,i,j,count=0;

for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
}


for(i=0;i<10;i++)
n=a[i];
for(j=0;j<10;j++)
{
if(a[j]!=n)
{count++;}

if(count==1)
printf("%d",a[j]);
count=0;
}

}

