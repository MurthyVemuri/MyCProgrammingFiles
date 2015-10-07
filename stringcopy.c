#include <stdio.h>
int main()
{
    
char f[100], s[100], i;
printf("Enter string s1: ");
scanf("%s",f);
for(i=0; f[i]!='\0'; i++)
{
  s[i]=f[i];
}
s[i]='\0';
printf("String s2: %s",s);
return 0;
}
