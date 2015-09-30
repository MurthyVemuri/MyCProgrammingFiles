/*Find Upto N prime reverse numbers ? */


#include<stdio.h>
void main()
{
int i,count=0,n,l,s=0,a;
scanf("%d",&n);
a=n;
for(i=1;i<=n;i++)
{

if(n%i==0)
{count++;}

}

if(count==2)
{printf("prime");}
else
{printf("Not prime");}


while(n!=0)
{
l=n%10;
s=s*10+l;
n=n/10;
}

printf("\n%d\n%d",s,a);

if((s-a)%18==0)
{printf("reverse prime");}
else
{printf("not a reverse prime");}
}
