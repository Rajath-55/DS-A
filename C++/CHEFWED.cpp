#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL)
typedef long long ll;
typedef long int l;
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
    ll n, k;
    cin >> n >> k;
    ll a[n + 1];
    map<ll, ll> mp;
    ll ans[n + 1];
    ans[0] = 0;
    for (ll i = 1; i < n + 1; ++i)
    {
        ans[i] = mxN;
    }
    a[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 1; i <= n; ++i)
    {
        mp.clear();
        ll count = 0;
        mp[a[i]]++;

        //  cout<<count<<"\n";
        for (ll j = i - 1; j >= 0; --j)
        {
            ans[i] = min(ans[i], ans[j] + k + count);

            mp[a[j]]++;
            if (mp[a[j]] > 2)
            {
                count++;
            }
            else if (mp[a[j]] == 2)
            {
                count += 2;
            }
        }
    }
    // for (auto x : ans)
    // {
    //     cout << x << " ";
    // }
    // cout << "\n";
    cout << ans[n] << "\n";
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
