#include<stdio.h>
void main()
{
int m,n,p,x,y,num1,num2,sum=0;
scanf("%d",&m);
scanf("%d",&n);
p=m*n;
//printf("%d",p);

while(m>=1)
{
m=m/2;
n=n*2;
//printf("%d %d\n",m,n);

if(m%2!=0)
{
sum=sum+n;
//printf("%d\n %d",n,sum);
}

}

if(sum==p)
{
printf("%d",sum);
}




}
