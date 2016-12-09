#include <stdio.h>
#include <math.h>
int main()
{
    double n,p,k;
    while(scanf("%lf %lf",&n,&p) == 2)///accepted
    {
      k = exp(log(p)/n);
      printf("%.lf\n",k);
    }
    return 0;
}
