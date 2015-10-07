#include<stdio.h>
#include<string.h>

void main()
{
char ch,arr[50];
int i=0;
FILE *fptr;

fptr=fopen("mytextfile","r+");

//fp=fopen("testfile","r+");
	fseek(fptr,1,SEEK_SET);

if(fptr == NULL)
printf("error!!!");


else
ch=fgetc(fptr);

printf("Question no is %c\n",ch);


	fseek(fptr,65,SEEK_SET);

if(fptr == NULL)
printf("error!!!");


else
ch=fgetc(fptr);

printf("Question no is %c\n",ch);

	fseek(fptr,-134,SEEK_END);

if(fptr == NULL)
printf("error!!!");


else
ch=fgetc(fptr);

printf("Question no is %c\n",ch);


fseek(fptr,-72,SEEK_END);

if(fptr == NULL)
printf("error!!!");


else
ch=fgetc(fptr);

printf("Question no is %c\n",ch);



fclose(fptr);
//fclose(fp);

}
