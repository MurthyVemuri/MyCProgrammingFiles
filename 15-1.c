#include<stdio.h>

void Fibonacci(int);

void main()
{
    int k,n;
    long int i=0,j=1,f;
    scanf("%d",&n);
   
    if(n==1)

    {printf("%d\n",0);}

    else if(n==2)

    printf("%d\n%d\n",0,1);

    else if(n>2)
    {printf("%d\n%d\n",0,1);
    Fibonacci(n);
    }
}

void Fibonacci(int n)
{

static long int f1=0,f2=1,sum;

if(n>2)
{
 sum = f1 + f2;
 f1 = f2;
 f2 = sum;
 printf("%ld\n",sum);
 Fibonacci(n-1);
}

}
