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
int chd;
char ch[15];
char cho[3];
scanf("%d",&d1.d);
scanf("%d",&d1.m);
scanf("%d",&d1.y);
scanf("%d",&chd);

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



switch(d1.m)
{
case 1:strcpy(cho,"Jan");
break;
case 2:strcpy(cho,"Feb");
break;
case 3:strcpy(cho,"Mar");
break;
case 4:strcpy(cho,"Apr");
break;
case 5:strcpy(cho,"May");
break;
case 6:strcpy(cho,"Jun");
break;
case 7:strcpy(cho,"Jul");
break;
case 8:strcpy(cho,"Aug");
break;
case 9:strcpy(cho,"Sep");
break;
case 10:strcpy(cho,"Oct");
break;
case 11:strcpy(cho,"Nov");
break;
case 12:strcpy(cho,"Dec");
break;
}

((d1.y)%4==0 && d1.m==2 && d1.d>=29)

if((d1.d<1 && d1.d>31)||(d1.m<1 && d1.m>12)||(chd>3)||((d1.y)%4!=0 && d1.m==2 && d1.d>28)||((d1.m==4||d1.m==6||d1.m==9||d1.m==10) && d1.d>30)||((d1.y)%4==0 && d1.m==2 && d1.d>29))
printf("invalid date");

else if(chd==1)
printf("%d/%d/%d",d1.d,d1.m,d1.y);

else if(chd==2)
printf("%d/%s/%d",d1.d,cho,d1.y);

else if(chd==3)
printf("%d/%s/%d",d1.d,ch,(d1.y)%100);
}
