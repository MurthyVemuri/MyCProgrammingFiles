#include<string.h>
#include<stdio.h>


void main()
{
char i[200];
const char tok[2] = " ";
char *token;
char fn[100]={'\0'}, e[100]={'\0'}, cn[100]={'\0'};
int n=0,len,k,j,temp;
scanf("%[^\n]",i);
token = strtok(i,tok);

while(token!=NULL) 
{
        
if(n%2!=0)
{
strcat(fn,token);
token = strtok(NULL,tok);
n++;
}   
}
   
/*len=strlen(fn); 
k=0; 
j=strlen(cn) - 1;  
      
while(k < j) 
{
 temp = cn[k];
 cn[k++] = cn[j];
 cn[j--] = temp;
}
*/
    printf("%s\n",fn);
    printf("%d\n",len);
    printf("%s\n",e);
    printf("%s",cn);

}

