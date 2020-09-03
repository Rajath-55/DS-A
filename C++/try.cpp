#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL)
typedef long long ll;
typedef long int l;
#define endl '\n';
ll mod = 1000000007;
const long long mxN = 1e18;
ll power(ll x, unsigned long long y, ll p)
{
    ll res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

void solve()
{
    ll p,f;
    cin>>p>>f;
    ll maxi = max(p,f);
    ll dp;
    ll cnts,cntw;
    cin>>cnts>>cntw;
    ll s,w;
    cin>>s>>w;
    ll res=0;



}
int main()
{
    fastio();
    int t;
    cin >> t;
    
    while (t--)
    {
        solve();
    }
    return 0;
}
