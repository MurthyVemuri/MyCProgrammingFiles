#include<stdio.h>
void main()
{
float u,r;
scanf("%f",&u);

if(u>=0 && u<=50)
{
printf("%f",u*(2.6));
}

else if(u>=51 && u<=100)
{
printf("%f",u*(3.25));
}

else if(u>=101 && u<=150)
{
printf("%f",u*(4.88));
}

else if(u>=151 && u<=200)
{
printf("%f",u*(5.63));
}

else if(u>=201 && u<=250)
{
printf("%f",u*(6.38));
}

else if(u>=251 && u<=300)
{
printf("%f",u*(6.88));
}

else if(u>=301 && u<=400)
{
printf("%f",u*(7.38));
}

else if(u>=401 && u<=500)
{
printf("%f",u*(7.88));
}

else if(u>=501)
{
printf("%f",u*(8.38));
}


}
