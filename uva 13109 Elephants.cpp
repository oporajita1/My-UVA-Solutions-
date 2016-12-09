#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int m,m1[100000],t,w,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&w);
        for(i=0;i<m;i++)
        {
            scanf("%d",&m1[i]);

        }
        sort(m1,m1+m);
        int flag=1;
        int res=0;
       for(i=0;i<m;i++)
       {
           res+=m1[i];
           if(res>w){
            printf("%d\n",i);
           flag=0;
           break;}
       }
       if(flag==1)printf("%d\n",m);
    }
    return 0;


}
