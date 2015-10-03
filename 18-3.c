#include<stdio.h>
int main(int argc,char *argv[])
{
int count;
char c[1000],ch;
FILE *fptr1,*fptr2;

fptr1=fopen(argv[1],"r");
fptr2=fopen(argv[2],"w");

if(fptr1 == NULL && fptr2 == NULL)
{
printf("error!!!");
}


else
{
while((ch=getc(fptr1))!=EOF)
{
fputc(ch,fptr2);
}
}
fclose(fptr1);
fclose(fptr2);

}



//murthy.txt vemuri.txt
