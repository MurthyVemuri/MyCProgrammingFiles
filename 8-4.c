#include<stdio.h>
void main()
{
int count=0,n,i,N;
scanf("%d",&N);


for(n=1;n<=N;n++)
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
	if(N%n==0)
	{printf("%d\n",n);}
	}
}

}
