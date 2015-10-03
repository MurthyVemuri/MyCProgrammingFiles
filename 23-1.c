/*Scanning and printing values from console and only using fwrite to store in questions.txt */

#include<stdio.h>
#include<stdlib.h>

typedef struct {
int qid;
char quest[100];
char option[4][100];
char correct[2];
}question;



void printing(question q[],int m)
{
int i;
for(i=0;i<m;i++)
{printf("question ID: %d \n",q[i].qid);
printf("question is: %s \n",q[i].quest);

printf("options 1: %s \n",q[i].option[0]);
printf("options 2: %s \n",q[i].option[1]);
printf("options 3: %s \n",q[i].option[2]);
printf("options 4: %s \n",q[i].option[3]);

printf("correct answer: %s\n",q[i].correct);}

}



void scanning(question q[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("question ID:\n");
fflush(stdin);
scanf("%d",&q[i].qid);
fflush(stdin);

printf("question is:\n");
fflush(stdin);
scanf("%s",q[i].quest);
fflush(stdin);


printf("options:\n");
fflush(stdin);
scanf("%s",q[i].option[0]);

fflush(stdin);
scanf("%s",q[i].option[1]);

fflush(stdin);
scanf("%s",q[i].option[2]);

fflush(stdin);
scanf("%s",q[i].option[3]);

fflush(stdin);

printf("correct answer is:\n");
scanf("%s",q[i].correct);
}

}


void main()
{
int k;
FILE *fptr;
fptr=fopen("questions.txt","w");

question q[10];

if(fptr==NULL)
{printf("Error .....");}

else
{
scanning(q,2);
 for(k=0;k<2;k++)
	fwrite(&q[k],sizeof(q[k]),1,fptr);

printing(q,2);
}
fclose(fptr);


}


