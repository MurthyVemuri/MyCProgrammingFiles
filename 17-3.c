#include <stdio.h>
#include <stdlib.h>

int main()
{   
int count =0,n;
char word[2000];
char *string=malloc(1000);

FILE *fptr = fopen("murthy.txt", "r");

if (fptr==NULL)
{
    printf("Error file missing\n");
}

scanf("%s",word);



while(!feof(fptr))
{
    fscanf(fptr,"%s",string);
    if(!strcmp(string,word))
    count++;
}
printf("word %s in file %d times\n",word,count );
return 0;
}
