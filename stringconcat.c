#include <stdio.h>
char string_concat(char s1[],char s2[]);
 
void main()
{
   char s1[100],s2[100];
   printf("Enter first string: ");
   scanf("%s",s1);
   printf("Enter second string: ");
   scanf("%s",s2);
	printf("%s%s",s1,s2);
}




/*
   s3= string_concat(s1,s2);
   printf("%s\n",s3);
}
 
char string_concat(char s1[],char s2[])
{
    char s1[100], s2[100], i, j;
    for(i=0; s1[i]!='\0'; ++i);  
    for(j=0; s2[j]!='\0'; ++j, ++i)
    {
        s1[i]=s2[j];
    }
    s1[i]='\0';
    return s1;
}
*/
