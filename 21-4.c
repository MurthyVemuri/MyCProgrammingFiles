#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct id{
double aadhar;
double pan;
char voter[20];
char dl[30];
};

void main()
{
struct id con[10];

int IDno,n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Contact's aadhar: ");
scanf("%lf",&con[i].aadhar);

printf("Contact's pan: ");
scanf("%lf",&con[i].pan);

printf("Contact's voter: ");
scanf("%s", con[i].voter);

printf("Contact's dl: ");
scanf("%s", con[i].dl);
}


FILE *file=fopen("subscribers.csv","w");



if(file != NULL)
{
for(i=0;i<n;i++)

{printf("123456 %d TSAPVD",i);	//ID number
fprintf(file,"%lf  %lf  %s  %s",con[i].aadhar,con[i].pan,con[i].voter,con[i].dl);}

fclose(file);

}

}
