#include <stdio.h>

void main()
{
int n1=0,n2=1,no,c,f;

scanf("%d",&no);
printf("%d  %d",n1,n2);

for(c = 1;c<=no-2;c++)
{
f=n1 + n2;
printf(" %d",f);
n1=n2;
n2=f;
}

}
