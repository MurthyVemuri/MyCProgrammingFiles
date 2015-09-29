#include<stdio.h>
void main()
{
int count=0,n,i,N,P,f;
scanf("%d",&P);

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
	printf("%d\n",n);
	f++;
	}
}
}
