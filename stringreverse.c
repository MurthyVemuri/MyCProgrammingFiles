#include <stdio.h>
#include <string.h>
int main() 
{

int i, j, temp; 
char sr[100]={'\0'};
scanf("%[^\n]",sr);
i=0;
j=strlen(sr) - 1;  
      
while(i < j) 
{
temp = sr[i];
sr[i] = sr[j];
i++; 
sr[j] = temp;
j--;
}

printf("%s\n", sr);

}
