#include<stdio.h>
#include<string.h>

void main()
{
char ch,arr[50];
int i;
FILE *fptr;

fptr=fopen("mytextfile","r+");

	fseek(fptr,1,SEEK_SET);

if(fptr == NULL)
printf("error!!!");


else
ch=fgetc(fptr);

printf("Question no is %c\n",ch);
fseek(fptr,2,SEEK_SET);
i=0;
ch=fgetc(fptr);
while(ch!='?')
{
arr[i]=ch;
i++;
ch=fgetc(fptr);
}
arr[i]='?';
printf("%s \n",arr);


	fseek(fptr,65,SEEK_SET);

if(fptr == NULL)
printf("error!!!");


else
ch=fgetc(fptr);

printf("Question no is %c \n",ch);
	fseek(fptr,66,SEEK_SET);
ch=fgetc(fptr);
i=0;
while(ch!='?')
{
arr[i]=ch;
i++;
ch=fgetc(fptr);
}

printf("%s ",arr);

fclose(fptr);

}
