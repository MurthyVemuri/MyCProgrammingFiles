#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){

int num=atoi(argv[1]),a[10],i,k,increasing,decreasing;
//int atoi(char *str) converts string to an integer type.
i=0;
while(num>0){

a[i]=num%10;
num=num/10;
i++;
}
increasing=0;
decreasing=0;

for(k=0;k<i-1;k++){
if(a[k]>a[k+1])
increasing=1;
if(a[k]<a[k+1])
decreasing=1;
}

if(increasing==1 && decreasing==0)
printf("Increasing number");

else if(decreasing==1 && increasing==1)
printf("Decreasing number");

else if(decreasing==1 && increasing==1)
printf("positive number");
return 0;
}
