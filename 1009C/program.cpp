#include <iostream>
using namespace std;


int main()
{
    long long int current, n, m, ans=0;
    scanf("%lld%lld",&n,&m);
    if (n%2)
    {
        current=n/2*(n/2+1);
    }else{
        current=n/2*(n/2+1)-n/2;
    }

    for (int i = 0; i < m; ++i)
    {
        long long x, d;
        scanf("%lld%lld",&x,&d);
        ans+=x*n;
        if (d>=0)
        {
            ans+=d*(n*(n-1)/2);
        }else{
            ans+=d*current;
        }
    }
    printf("%lf\n",(float)ans/n);
    return 0;
}
