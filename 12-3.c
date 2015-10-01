#include<stdio.h>

int main()

{
int i,j,k=3,daysinamonth = 30;

printf("\n");

k=3;

for(i=1;i<=12;i++) {
 
if(i==1)printf("January");
if(i==2)printf("\nFebruary");
if(i==3)printf("\nMarch");
if(i==4)printf("\nApril");
if(i==5)printf("\nMay");
if(i==6)printf("\nJune");
if(i==7)printf("\nJuly");
if(i==8)printf("\nAugust");
if(i==9)printf("\nSeptember");
if(i==10)printf("\nOctober");
if(i==11)printf("November");
if(i==12)printf("December");
   
  if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
    daysinamonth = 31;
  else 
    daysinamonth = 28;

  printf("\nMon\tTue\tWed\tThu\tFri\tSat\tSun\n");


  for(j=1;j<=k;j++)
    printf("\t");
 

 for(j=1;j<=daysinamonth;j++) {
    printf("%d\t",j);
    k++;
    if(k==7) {
       k=0;
       printf("\n");
    }
  }
}
return 0;
}
