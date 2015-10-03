#include <string.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
   const char s[2] = "/";
   char *token;
   scanf("%[^\n]",argv[1]);   
   token = strtok(argv[1], s);
   while( token != NULL ) 
   {
      printf( " %s\n", token ); 
      token = strtok(NULL, s);
   }
   
   return(0);
}


