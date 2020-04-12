#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of elements\n";
    cin>>n;
    int a[n];
    cout<<"Enter array elements\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int low=0, high = n-1, mid=(low+high)/2;
    cout<<"Enter the element to be searched\n";
    int k;
    cin>>k;
    int pos=-1;
    if(k==a[mid]){
        pos=mid;
    }else if(k>a[mid]){
        low=mid+1;
    }else{
        high=mid-1;
    }
    if(pos>=0){
        cout<<"Element "<<k<<" is present at position "<<pos+1<<endl;
    }else{
        cout<<"Element "<<k<<" is not in the array\n";
    }
    return 0;
}