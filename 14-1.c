#include <stdio.h>
long int power(long int n1,long int n2);
long int main()
{
    long int base, exp;
    scanf("%ld",&base);
    scanf("%ld",&exp);
    printf("%ld",power(base, exp));
    return 0;
}
long int power(long int base,long int exp)
{
    if (exp!=1)
        return (base*power(base,exp-1));
}
