#include<string.h>
#include<stdio.h>


void main()
{
char i[200000];
const char tok[2] = " ";
char *token;
char rep[10]={'\0'},c[10]={'\0'},res[10]={'\0'},fn[10]={'\0'};
int n=0,len,k,j,temp;
scanf("%[^\n]",i);
scanf("%[^\n]",rep);
scanf("%[^\n]",res);
scanf("%[^\n]",c);

token = strtok(i,tok);

while(token!=NULL) 
{
        
if(n%2!=0)

{
strstr(fn,token);
}
token = strtok(NULL,tok);n++;
    
}
    printf("%s\n",fn);

}

