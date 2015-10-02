#include<stdio.h>
int main()
{
int count;
char c[1000];
FILE *fptr;
fptr=fopen("murthy.txt","w");
if(fptr == NULL)
{
printf("error!!!");
}

scanf("%[^\n]",c);
fprintf(fptr,"%s",c);
fclose(fptr);
return 0;

}
