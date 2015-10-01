#include<stdio.h>
void main()
{
int *p,n,i,j,b[10];
scanf("%d",&n);
p=&n;
//a=(int *)malloc(sizeof(int)*n);
if((*p)>=0 && (*p)<10)
{

j=2;
for(i=0;i<10;i++)
b[i]=i*j*(*p);


for(i=0;i<10;i++)
printf("%d\n",b[i]);

}
else
printf("invalid input");

}
