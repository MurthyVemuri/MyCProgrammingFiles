#include<stdio.h>
void main()

{
int n,ten=100,five=100,two=100,one=100,a;


do
{
scanf("%d",&n);
if(n==10)
{
printf("in-valid");
}

else if(n==20)
{
a=n-15;//5
two=two-2;
one--;
printf("%d",a);
}

else if(n==50)
{
a=n-15;//35
ten=ten-10;
five=five-1;
printf("%d",a);

}

else if(n==100)
{
a=n-15;//85
ten=ten-30;
five=five-98;
two=two-98;
one=one-99;
printf("%d",a);

}

else
{
printf("in-valid");

}
//printf("\n%d %d %d %d",ten,five,two,one);
}while(ten>0&&five>0&&two>0&&one>0);
//printf("end \n%d %d %d %d",ten,five,two,one);
}
