#include<stdio.h>
#include<string.h>

struct date{
int d;
int m;
int y;
};

void main()
{
struct date d1;
int chd,chm,chy;
char ch[3];

scanf("%d",&chd);
scanf("%d",&d1.d);

scanf("%d",&chm);
scanf("%d",&d1.m);

scanf("%d",&chy);
scanf("%d",&d1.y);

switch(d1.m)
{
case 1:strcpy(ch,"January");
break;
case 2:strcpy(ch,"February");
break;
case 3:strcpy(ch,"March");
break;
case 4:strcpy(ch,"April");
break;
case 5:strcpy(ch,"May");
break;
case 6:strcpy(ch,"June");
break;
case 7:strcpy(ch,"July");
break;
case 8:strcpy(ch,"August");
break;
case 9:strcpy(ch,"September");
break;
case 10:strcpy(ch,"October");
break;
case 11:strcpy(ch,"November");
break;
case 12:strcpy(ch,"December");
break;
}


if((d1.d<1 && d1.d>31)||(d1.m<1 && d1.m>12)||(chd!=1 && chm!=2 && chy!=3))
printf("invalid date");

else
printf("%d/%s/%d",d1.d,ch,d1.y);
}
