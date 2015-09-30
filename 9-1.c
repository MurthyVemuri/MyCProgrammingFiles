#include<stdio.h>
void main()
{
int count=0,n,i,P,f,sum=0;
scanf("%d",&P);

if(P>=0)
{

f=1;

for(n=1;f<=P;n++)
{
count=0;
for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
	count++;
	}
}
if(count==2)
	{
	//sum=sum+n;
printf("%d\n",n);
	f++;
	}
}

}
else
{printf("invalid input");}
}
