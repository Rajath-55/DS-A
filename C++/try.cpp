#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL)
typedef long long ll;
typedef long int l;
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        l a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        int max=-1;
        int count =0;
        int pos=-1;
        for(int i=0;i<n;++i){
            if(i+k-1<n){ 
            for(int j=i+1;j<i+k-1;++j){
                if(a[j-1]<a[j]&&a[j]>a[j+1]){
                    count ++;
                }
                pos = i;
            }
            
            if(count>max){
                max=count;
                pos=i;
            }
            }
        }
        cout<<max + 1<<" "<<pos+1<<endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return(0);
}