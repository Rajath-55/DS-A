#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL)
typedef long long ll;
typedef long int l;
void solve()
{
    ll n;
    cin>>n;
    string s;
    int flag=1;
    cin>>s;
    unordered_map<char,int> counts;
    for(ll i=0;i<n;++i){
        counts[s[i]]++;
    }
    for(auto x : counts){
        if(x.second&1){
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

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
