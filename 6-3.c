#include<stdio.h>
void main()
{
int mon,year,day;
scanf("%d\n",&mon);
scanf("%d\n",&year);
if(year%4==0)

{
if(mon==4||mon==7||mon==9||mon==11)
{printf("30");}
if(mon==1||mon==5||mon==3||mon==6||mon==8||mon==10||mon==12)
{printf("31");}
if(mon==2)
{printf("29");}
}

else

{
if(mon==4||mon==7||mon==9||mon==11)
{printf("30");}
if(mon==1||mon==5||mon==3||mon==6||mon==8||mon==10||mon==12)
{printf("31");}
if(mon==2)
{printf("28");}

}
}
