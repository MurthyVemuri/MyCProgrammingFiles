#include<stdio.h>
void main()

{
int i,j,m,n,a[3][3],b[3][3],c[3][3],x,y,p[10][10],q[10][10],r[10][10],k;


for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);
	}

}


for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	scanf("%d",&b[i][j]);
	}

}


scanf("%d",&n);
//scanf("%d",&n);


for(x=0;x<n;x++)
{
	for(y=0;y<n;y++)
	{
	scanf("%d",&p[x][y]);
	}

}


for(x=0;x<n;x++)
{
	for(y=0;y<n;y++)
	{
	scanf("%d",&q[x][y]);
	}

}


for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%d\n",c[i][j]=a[i][j]+b[i][j]);
	}

}




for(i=0;i<n;++i)

	for(j=0;j<n;++j)
	{
	r[i][j]=0;
	for(k=0;k<n;++k)
	r[i][j]+=p[i][k]*q[k][j];
	}


for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	printf("%d\n",r[i][j]);
	}

}


}
