#include <bits/stdc++.h>
using namespace std;
#define mod (int)(1e9+7);
#define endl '\n';

bool compare(const pair<char,int>&left, const pair<char,int>&right){
    return left.second < right.second;
}
int main()
{

    string s,t,res="";
    cin>>s>>t;
    int n = s.size();
    unordered_map<char,int>counts,countt;
    for(auto x : s) counts[x]++;
    for(auto x : t) countt[x]++;
    int mincount = INT_MAX;
    for(auto x : counts){
        for(auto y : countt){
            if(y.first == x.first)
            mincount = min(mincount, x.second/y.second);
        }
    }
    cout<<mincount<<endl;
    for(auto y : countt){
        counts[y.first]-=mincount;
    }
    for(auto x : counts){
        int temp = x.second;
        while(temp--) res+=x.first;
    }


    
    sort(res.begin(), res.end());
    cout<<res<<endl;
    
    

    return 0;
}


/* abgertagrrg rag   
   r:3 a:2 g:3
   r:2 a:1 g:1
  greedily remove rag
  to get bgrt
  sort that 
  then add as many rags removed 
  bgrragragt
*/