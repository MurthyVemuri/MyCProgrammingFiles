#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char ch,arr[100];
int i=0;
FILE *fptr;
fptr=fopen("murthy.txt","r");

if(fptr == NULL)
{
printf("error!!!");
}

else
{
ch=fgetc(fptr);
while(ch!=EOF)
{
arr[i]=ch;
i++
ch=fgetc(fptr);
}
arr[i]='\0';
}
printf("%c",arr);
fclose(fptr);
}
