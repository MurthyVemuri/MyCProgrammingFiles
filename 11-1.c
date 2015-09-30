#include<stdio.h>
void main()
{
int ch,a,b;
float c;

do
{

scanf("%d",&ch);

if(ch==1)
{
scanf("%d %d",&a,&b);
c=a+b;
printf("%.2f",c);

}

else if(ch==2)
{
scanf("%d %d",&a,&b);
c=a-b;
printf("%.2f",c);

}

else if(ch==3)
{
scanf("%d %d",&a,&b);
c=a*b;
printf("%.2f",c);

}

else if(ch==4)
{
scanf("%d %d",&a,&b);
c=a/b;
printf("%.2f",c);

}

else if(ch==5)
{
scanf("%d %d",&a,&b);
c=a%b;
printf("%.2f",c);

}


else 
{
printf("EXIT");
break;
}

}
while(ch>6 ||ch==0 ||ch==1 ||ch==2 ||ch==3 ||ch==4||ch==5);

}
