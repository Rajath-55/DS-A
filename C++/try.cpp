/* Author : Rajath V 
   Challenge : Long
*/

#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL)
typedef long long ll;
typedef long int l;
#define endl '\n';
#define vll(s) vector<ll>s
ll mod = 1000000007;
const long long mxN = 1e18;

//Template functions
vector<string> split(const string &s, char delim) 
{ 
    vector<string> elems; 
    stringstream ss(s); 
    string item; 
    while (getline(ss, item, delim)) 
        elems.push_back(item); 
  
    return elems; 
} 
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
vector<ll> inp(ll n)
{
    vector<ll> a;
    for (int i = 0; i < n; ++i)
    {
        ll inp;
        cin >> inp;
        a.push_back(inp);
    }
    return a;
}

void outp(vector<ll> a)
{
    for (auto x : a)
        cout << x << " ";
    cout << endl;
}



//Solve function for t test cases
void solve()
{
    ll n;
    cin >> n;
    vll(a) = inp(n);
    vll(res) = a;
    outp(a);
    ll count=0;
    
    outp(res);
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
