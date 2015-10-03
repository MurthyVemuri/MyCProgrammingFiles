/*Scanning and printing values from console using structures */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
int qid;
char  *question;
char  *options[4];
int  ca;
}quiz;



void scanvalues(quiz q)
{
int i;
printf("question id is %d \n",q.qid);
printf("question is %s \n",q.question);

for(i=0; i<4; i++)
   printf("option is %s \n",q.options[i]);

printf("correct answer is %d \n",q.ca);
}





void printvalues(quiz *q)
{
int i;
char ques[100];
char option[100];
printf("QID ");
scanf("%d",&q->qid);
fflush(stdin);
printf("QNO ");
scanf("%s",ques);

q->question = (char *) malloc(sizeof(char) * strlen(ques)+1);
strcpy(q->question, ques);

fflush(stdin);

for(i=0; i<4; i++)
{
fflush(stdin);
printf("OPTION ");
scanf("%s",option);

q->options[i] = (char *)malloc(sizeof(char) * strlen(option) + 1);
strcpy(q->options[i], option);

fflush(stdin);
}

fflush(stdin);
printf("CA\n");
scanf("%d",&q->ca);
scanvalues(*q);	//function calling
}




int main()
{ 
quiz q[10];
int i;
for(i=0; i<2; i++)
   printvalues(&q[i]);
}
