/*for(i=0;i<=strlen(str);i++)
{
if(str[i]>=65&&str[i]<=90)
str[i]=str[i]+32;
  }*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
int count =0,n,c++;
char word[2000];
char *string=malloc(1000);

FILE *fptr = fopen("murthy.txt", "r");

if (fptr==NULL)
{
    printf("Error file missing\n");
}

scanf("%c",word);
while(!feof(fptr))
{
    fscanf(fptr,"%c",string);
    if(!strcmp(string,word))
    count++;
}
printf("word %s in file %d times\n",word,count );


if(fptr == NULL)
printf("unable to open file");

else
{
while((n=fgetc(fptr))!=EOF)
{printf("%c",n);c++;}
}

return 0;
}
