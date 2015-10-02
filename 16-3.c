/*encoding message*/

#include<stdio.h>
#include<stdlib.h>
 


char* encode(char* str,int n) 
{
int i = 0;

while (str[i] != '.') 
{
str[i] = str[i]+n;

if(str[i]>=97 && str[i]<=122)
{
	if(str[i]>'z')	
	{str[i]=str[i]-25;i++;}
}

else 
str[i]=str[i]+n;
i++;

}
return (str);
}
 


char* decode(char* strd,int n) 
{
int i = 0;

for(i=0;strd[i];i++)
{

   strd[i]=strd[i]-n;
}



return(strd);
}

void main() 
{
 
char *str=malloc(1000);
char *strr=malloc(1000);
int n,m;
scanf("%s",str);
scanf("%d",&n);
scanf("%s",strr);
scanf("%d",&m);
str = encode(str,n);
strr = decode(strr,m);
printf("%s\n", str);
printf("%s\n", strr);

}







