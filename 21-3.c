#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct contact{
char name[20];
double mobile;
char ema[30];
};

void main()
{
struct contact con[10];
int i;
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("Contact's name: ");
scanf("%s", con[i].name);
printf("Contact's phone: ");
scanf("%lf",&con[i].mobile);
printf("Contact's email: ");
scanf("%s", con[i].ema);
}

FILE *file=fopen("contacts.csv","w");



if(file != NULL)
{
for(i=0;i<n;i++)
fprintf(file,"%s,%lf,%s\n",con[i].name,con[i].mobile,con[i].ema);

fclose(file);

}

}
