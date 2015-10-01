#include <stdio.h>

int sum(int n);



void main()
{
int n,res,i,j,q;
scanf("%d",&n);
sum(n);
}



int sum(int n)
{
int i,j,q;
if(n<0)
printf("Invalid input");
else {
for(i=1;i<=n;i++)
    {q=0;
        for(j=1;j<i;++j)
        {
	   q=q+j;
           printf("%d + ",j);
	   	
        }

printf("%d = %d\n",j, q);
    }

}

}
