#include<stdio.h>
void main()
{
int d,a;
scanf("%d",&d);
scanf("%d",&a);


if(d==1)
{
if (d==1 && a==1 ||d==1 && a==2 ||d==1 && a==3 ||d==1 && a==4 ||d==1 && a==5 ||d==1 && a==6 ||d==1 && a==7 ||d==1 && a==8)
{printf("Compatible");}
}


if(d==2)
{
if(d==2 && a==2 ||d==2 && a==4 ||d==2 && a==6 ||d==2 && a==7)
{printf("Compatible");}
else
{printf("Not compatible");}
}




if(d==3)
{
if(d==3 && a==3 ||d==3 && a==4 ||d==3 && a==8 ||d==3 && a==7)
{printf("Compatible");}
else
{printf("Not compatible");}
}


if(d==4)
{
if(d==4 && a==7 ||d==4 && a==4)
{printf("Compatible");}
else
{printf("Not compatible");}
}


if(d==5)
{
if(d==5 && a==5 ||d==5 && a==6 ||d==5 && a==8 ||d==5 && a==7)
{printf("Compatible");}
else
{printf("Not compatible");}
}



if(d==6)
{
if(a==7 || a==6)
{printf("Compatible");}
else
{printf("Not compatible");}
}


if(d==7)
{
if(d==7 && a==8)
{printf("Compatible");}
else
{printf("Not compatible");}
}



if(d==8)
{
if(a==7 || a==8)
{printf("Compatible");}
else
{printf("Not compatible");}
}


}







