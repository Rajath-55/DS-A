#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL)
typedef long long ll;
typedef long int l;
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        int n;
        int freq[1000]={0};

        cin>>n;
        int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
            freq[a[i]]++;
        }
        bool visited[1001];
        int times[1001];
        for(int i=0;i<1001;++i){
            times[i]=freq[i];
        }
    }
}