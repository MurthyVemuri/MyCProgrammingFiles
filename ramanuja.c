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








