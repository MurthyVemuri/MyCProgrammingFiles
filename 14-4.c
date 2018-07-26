#include<stdio.h>

long int ram(long int n);

void main()
{
long int n,res;
scanf("%ld",&n);

res=ram(n);

if(res==n)
printf("ramanujan number");
else
printf("Not a ramanujan number");
}



long int ram(long int n)
{

long int sum=0,a,r,s=0,res;

while(n>0)
{
long int k=n%10;
sum=sum+k;
n=n/10;
}

a=sum;
s=0;

while(a>0)
{
r=a%10;
s=s*10+r;
a=a/10;
}


return s*sum;
}




/*
#include<stdio.h>
#include<math.h>
void main()
{
double n,t;
int r,i,crt,res,count=1;
scanf("%lf",&n);

	printf("cube root %lf\n",cbrt(n));

r=(int)cbrt(n);

	printf("type cast cube root %d\n",r);

for(i=1;i<=r;i++)
{
res=i*i*i;
t=n-res;
crt=(int)cbrt(t);

printf("n value:%lf",n);

if(res+(crt*crt*crt)==n)
{//printf("%d : %d \n",crt,i);
count++;
}

printf("count:%d\n",count);

if(count==2)
{printf("%d : %d \n",crt,i);

}



}


}









*/
