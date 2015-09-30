 /*10-3 binary number of given number */-


#include<stdio.h>
int main()
{

long int n,r,l;
int ar[100],i=1,j;

scanf("%ld",&n);
l=n;
while(l!=0)
{
ar[i++]= l % 2;
l = l / 2;
}


for(j=i-1;j>0;j--)
printf("%d",ar[j]);


return 0;

}
