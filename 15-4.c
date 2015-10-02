#include <stdio.h>

long int power(long int n1,long int n2);

void main()
{

long int exp;
scanf("%ld",&exp);
if(exp==1)
{printf("2");}
else if(exp==0)
{printf("1");}
else 
printf("%ld",power(2,exp));

}

long int power(long int b,long int exp)

{

 b=2;
 if (exp!=1)
 return (b*power(b,exp-1));

}
