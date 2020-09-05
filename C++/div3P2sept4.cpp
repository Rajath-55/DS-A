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
ll diff(ll a, ll b, ll x, ll y, ll n, bool f)
{
    if (f)
    {
        ll da = min(n, a - x);
        // cout << "da " << a - x << endl;
        if (da == a - x)
        {
            // cout << "ye " << n - a + x << endl;
            b -= min(n - a + x, b-y);
        }
        a -= da;
    }
    else
    {
        ll db = min(n, b - y);
        if (db == b - y)
        {
            a -= min(n - b + y, a-x);
        }
        b -= db;
    }
    // cout << a << " " << b << endl;

    return a * b;
}

void solve()
{
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    ll k = n;
    ll res;
    res = min(diff(a, b, x, y, n, true), diff(a, b, x, y, n, false));

    cout << res << endl;
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
