#include <stdio.h>
int main()
{
    long int a,b,res;
    while(scanf("%ld %ld",&a,&b)==2)///accepted
    {
        res=(a*b)-1;
        printf("%ld\n",res);
    }
    return 0;
}
