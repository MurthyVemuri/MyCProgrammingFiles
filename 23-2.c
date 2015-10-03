/*Printing values to console by using fread function from questions.txt */

#include<stdio.h>
#include<stdlib.h>

typedef struct {
int qid;
char quest[100];
char option[4][100];
char correct[2];
}question;

void main()
{
int k,count=0;
FILE *fptr;
fptr=fopen("questions.txt","r");

question q[10];
int i;

if(fptr==NULL)
{printf("Error .....");}

else
{

for(k=0;k<2;k++)
{fread(&q[k],sizeof(q[k]),1,fptr);
count++;}
}
fclose(fptr);

for(i=0;i<2;i++)
{
printf("question ID: %d \n",q[i].qid);
printf("question is: %s \n",q[i].quest);

printf("options 1: %s \n",q[i].option[0]);
printf("options 2: %s \n",q[i].option[1]);
printf("options 3: %s \n",q[i].option[2]);
printf("options 4: %s \n",q[i].option[3]);

//printf("correct answer: %s\n",q[i].correct);
}
printf("no of questions are : %d\n",count);

}


