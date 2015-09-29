/*Write a C program to verify if a given character is vowel or a consonant. 

This program takes a character input.
Do not use nested conditionals, use logical operators such as AND, OR, NOT to determine vowel / consonant.
*/

#include<stdio.h>
void main()
{
char c,v;

scanf("%c",&c);
if( c=='a' || c=='e' ||c=='i' || c=='o'|| c=='u'|| c=='A'||c=='E'||c=='I'||c=='O'||c=='U')

printf("Vowel");
else
printf("Consonant");
}
