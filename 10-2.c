/*10-2 sentence contains alphabets are not*/

#include<stdio.h>
int main()
{
char alpha[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char a,name[100];
int i,s=0,j,k,l,sum=0,temp=1;
scanf("%d",&l);
	
for(i=0;i<l;i++)
scanf("%c",&name[i]);
	
for(j=0;j<26;j++)
{
   a=alpha[j];
for(k=0;k<l;k++)
{
if(a==name[k])
{ 
temp++;
break;
}
}
}
if(temp==26)
printf("Contain all the alphabets");
else
printf("Does not Contain all the alphabets");
}
