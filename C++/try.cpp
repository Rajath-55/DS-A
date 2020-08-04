#include <bits/stdc++.h>

using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL)
typedef long long ll;
typedef long int l;




void solve()
{
 int n;
 int flag=1;
 
 cin>>n;
 int lindex=-1,hindex=n;
 int a[n];
 vector<int>b;
 for(int i=0;i<n;++i){
    cin>>a[i];
 }
 for(int i=0;i<n;++i){
     b.push_back( abs(a[i]-i-1));

 }
 
 

//  cout<<lindex<<" "<<hindex<<"\n";
unordered_map<int,int>k;
for(auto&x:b){
    //  cout<<x<<" ";
     if(x!=0){
       k[x]++;
    //    cout<<k[x]<<" "<<x<<" ";
     }
     
 }
 for(auto x : k){
     if(x.second&1){
         flag=0;
     }
 }
 for(auto &x : b){
     cout<<x<<" ";
 }
 if(flag){
    
 }


  
return;
}

int main()
{
    // fastio();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();

    return 0;
}
