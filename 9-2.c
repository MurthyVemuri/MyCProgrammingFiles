#include<stdio.h>
void main()
{
int n,i,fact=1,k,sum=0;
scanf("%d",&n);

if(n>=0)
{
if(n==0)
printf("%d",fact);
else {
while(n>0)
{
	k=n%10;

	for(i=1;i<=k;i++)
	{
	fact=fact*i;
	}
	sum=sum+fact;
	fact=1;
	n=n/10;
	
}
printf("%d",sum);
}
}

else 
{
    printf("invalid input");}

}
