#include <stdio.h>
int string_len(char []);
 
void main()
{
   char s[100];
   int length;
   scanf("%[^\n]",s);
   length = string_len(s);
   printf("%d\n", length);
}
 



int string_len(char s[]) 
{
int i,c=0;
for(i=0;s[i]; i++)
if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')|| s[i]==' ' )
{c++;}

   return c;
}


//while(s[i]='\0')
/*for(i=0;s[i]; i++)
if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || s[i]==' ')
{c++;}*/
