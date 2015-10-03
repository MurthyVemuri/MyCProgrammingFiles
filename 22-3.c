/*Scanning and printing values from console and using frite to store values by using 22-1.h header file store in questions.txt */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "22-1.h"


typedef struct {
int qid;
int  questionno;
int  options[4];
}test;



void main()
{
int k;
question q[10];
FILE *fptr,*fp;
fptr=fopen("questions.txt","w");

fp=fopen("test.txt","r");

if(fptr==NULL && fp==NULL)
{printf("Error .....");}

else
{
 for(k=0;k<2;k++)
	fread(&q[k],sizeof(q[k]),1,fptr);

 printing(q,1);
 for(k=0;k<1;k++)
	fwrite(&q[k],sizeof(q[k]),1,fp);
}
fclose(fptr);


}
