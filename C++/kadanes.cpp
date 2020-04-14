#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int best=0,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int k=0;k<n;k++){
        sum=max(a[k], sum+a[k]);
        best = max(best,sum);
    }

    cout<<"The maximal contiguous subarray sum is "<<best<<endl;
    
}