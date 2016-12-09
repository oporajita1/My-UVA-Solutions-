#include<stdio.h>
#include<math.h>
int main()
{
   long int p,q,r,s,t,u,i;
    double mid,hi,low,res;
    while(scanf("%ld %ld %ld %ld %ld %ld",&p,&q,&r,&s,&t,&u) == 6)
    {
        if(p*exp(-1)+q*sin(1)+r*cos(1)+s*tan(1)+t+u>1e-9 || p+q+r<0)
        {
            printf("No Solution\n");
            //continue;
        }
       low=0.0,hi=1.0;

       for(i=0;i<30;i++)
       {mid = (low+hi)/2;
           res = p*exp(-mid)+q*sin(mid)+r*cos(mid)+s*tan(mid)+t*(mid*mid)+u;
           if(res>0)low = mid;
            else hi=mid;

       }
       printf("%.4lf\n",low);
    }
    return 0;
}
