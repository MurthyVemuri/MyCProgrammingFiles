/*10-4 LUHN test passed*/

#include<stdio.h>
void main()

{
int x,y,z,i,c=0,l=0,m=0,s1,s2,s4,s3=0,s5;
scanf("%d",&x);

while(x>0)
{
y=x%10;
x=x/10;


if(y%2==0)	//even
{

z=2*y;
if(z>9)
{
s3=(z%10)+(z/10)+s3;
}
s4=s4+z;

}

else	//odd
{
m=m+y;
s2=m;
}

s5=s3+s4;
}
printf("even %d\n",s5);
printf("odd %d\n",s2);	//odd no change

if((s3+s2)%10==0)
printf("Passed the Luhn test");
else
printf("Didnot pass the Luhn test");


}
