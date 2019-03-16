#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int ll;

ll gcd(ll a, ll b);
ll lcm(ll a, ll b);

int main()
{
    ll n, a,b, p, q;
    scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q);
    ll ans=0;
    ans+=n/a*p;
    ans+=n/b*q;
    ans-=(n/lcm(a,b))*min(p,q);
    printf("%lld\n",ans );
    return 0;
}

ll gcd(ll a, ll b){
    return !a ? b : gcd(b%a,a);
}

ll lcm(ll a, ll b){
    return a/gcd(a,b)*b;
}