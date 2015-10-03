#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[])
{
int len1,len2,len3;

if (argc!=4)
{
printf("\n Invalid arguments \n");
}


len1=strlen(argv[1]);
len2=strlen(argv[2]);
len3=strlen(argv[3]);


if(len1>len2 && len1>len3 && len2>len3)
printf("%s %s %s\n",argv[1],argv[2],argv[3]);

else if(len1>len2 && len1>len3 && len3>len2)
printf("%s %s %s\n",argv[1],argv[3],argv[2]);

else if(len2>len1 && len2>len3 && len1>len3)
printf("%s %s %s\n",argv[2],argv[1],argv[3]);

else if(len2>len1 && len2>len3 && len3>len1)
printf("%s %s %s\n",argv[2],argv[3],argv[1]);

else if(len3>len2 && len3>len1 && len1>len2)
printf("%s %s %s\n",argv[3],argv[1],argv[2]);

else if(len3>len2 && len3>len1 && len2>len1)
printf("%s %s %s\n",argv[3],argv[2],argv[1]);


return 0;
}
