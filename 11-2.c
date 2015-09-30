#include<stdio.h>
void main()

{
long int n,s,sum=0;
scanf("%ld",&n);
do
{
s=n%10;
sum=sum+(s*s);
n=n/10;
}
while(n>0);
printf("%ld",sum);
}





