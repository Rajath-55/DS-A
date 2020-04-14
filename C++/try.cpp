#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
typedef long long ll;
typedef long int l;
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> counteven;
        vector<int> countbad;

        l a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if((a[i]/2)%2!=0&&a[i]%2==0)
            countbad.push_back(i);
            if(a[i]%2==0)
            counteven.push_back(i);
        }
        l res = n*(n+1)/2;
        l count = 0;
        for(auto i = counteven.begin();i<counteven.end();++i){
            cout<<*i<<" ";
        }
        cout<<endl;
        for(auto i = countbad.begin();i<countbad.end();++i){
            cout<<*i<<" ";
        }
        cout<<countbad.size();
        
        
    
    
    
    
    
    
    
    
    
    
    
    
    }
    
    
    
    return(0);
}