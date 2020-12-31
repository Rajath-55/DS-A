#include <bits/stdc++.h>

using namespace std;

//To check if paranthesis match properly
int main() {
	string s; cin>>s;
    int count = 1;
    bool res = true;
    int n = s.length();
    if(s[0] !='(') res = false;
    if(s[n-1] !=')') res=false;

    for(int i=1;i<n;++i){
        // cout<<s[i]<<" "<<count<<endl;
        if(s[i] == '(') count++;
        if(s[i] == ')') count--;
        if(count ==0 && s[i] !='(' && s[i] !=')') res = false;

    }
    if(count ==0){
    if(res) cout<<"YES "<<s<<endl;
    else cout<<"NO "<<s<<endl;
    }else{
        cout<<"NO "<<s<<endl; 
    }
 }