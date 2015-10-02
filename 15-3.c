#include <stdio.h>

long factorial(int n); 

void main()
{
int i,n,c; 
scanf("%d",&n);
    
for(i=0;i<n;i++)
{
 for(c=0;c<=(n-i-2);c++)
   printf(" ");
   for(c=0;c<=i;c++)
   {printf("%ld  ",factorial(i)/(factorial(c)*factorial(i-c)));}
   printf("\n");
}
 
}
 


long factorial(int n)
{
   int i;
   long fact=1;
 
   for (i=1;i<=n;i++)
         fact=fact*i;
 
   return fact;
}
