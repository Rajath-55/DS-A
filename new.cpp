#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long ll;
typedef long int l;
int main(){
    fastio();
    int t;
    int n;
    l count = 0;
    l res;
    cin>>t;
    while(t--){
        
        cin>>n;
        l a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        l count = 0;
        l res = n*(n+1)/2;
        for(int i = 0;i<n; ++i){
            if((a[i]/2)%2!=0&&a[i]%2==0){
                // cout<<a[i];
                count++;
                if(i!=0){
                if(a[i-1]%2!=0)
                count++;
                }
                if(i!=n-1){
                if(a[i+1]%2!=0)
                count++;
                }
                if(i>0&&i<n-1){
                if(a[i-1]%2!=0&&a[i+1]%2!=0)
                count++;
                }
                // cout<<count<<endl;
            }
        }
        res-=count;
        cout<<res<<endl;
        count = 0;
        







        
    }
    return 0;
}        