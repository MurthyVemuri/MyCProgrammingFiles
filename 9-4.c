#include<stdio.h>
void main()

{

int n,k=1,sum,x,y=1,z;
scanf("%d",&n);

if(n>0)

{


sum=0;
while(n>0)
{

k=n%10;
sum=sum*10+k;
k=n/10;
n=k;
}

x=sum;
//printf("%d",sum);

while(x>0)
{
y=x%10;
x=x/10;

switch(y)
{
case 0:printf("ZERO ");
break;

case 1:printf("ONE ");
break;

case 2:printf("TWO ");
break;

case 3:printf("THIRD ");
break;

case 4:printf("FOUR ");
break;

case 5:printf("FIVE ");
break;

case 6:printf("SIX ");
break;

case 7:printf("SEVEN ");
break;

case 8:printf("EIGHT ");
break;

case 9:printf("NINE ");
break;

default:break;
}
}

}



else

{printf("invalid input");}





}
