#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL)
typedef long long ll;
typedef long int l;
// str.erase(0, min(str.find_first_not_of('0'), str.size()-1));
void bin(unsigned long long n) 
{ 
    if (n > 1) 
    bin(n>>1); 
      
    printf("%lld", n & 1);
     
} 
void solve()
{
    ll n;
    cin>>n;
    unsigned long long  a[n];
    for(ll i=0;i<n;++i){
        cin>>a[i];
        
    }
    bin(32);
   





    return;
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
