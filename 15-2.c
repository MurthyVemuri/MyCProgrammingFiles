#include<stdio.h>
int Palindrome(int);

void main(){

int n,res;
scanf("%d",&n);
res=Palindrome(n);

if(n==res)
printf("palindrome");
else
printf("not palindrome");
}



int Palindrome(int num)
{
static int s=0,r;

if(num!=0)
{
r=num%10;
s=s*10+r;
Palindrome(num/10);
}

return s;
}
