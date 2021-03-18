#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
bool checkStraightLine(vector<vector<int>> &coordinates)
{
    set<int> slopes;
    for (int i = 1; i < coordinates.size(); ++i)
    {
        if (coordinates[i][0] == coordinates[i - 1][0])
        {
            slopes.insert(INT_MIN);
           
        }else{
        int slope = (coordinates[i][1] - coordinates[i - 1][1]) / (coordinates[i][0] - coordinates[i - 1][0]);
        // cout<<slope<<endl;
        slopes.insert(slope);
        }
    }
    return slopes.size() == 1;
=======
#define mod (int)(1e9+7);
#define endl '\n';

bool compare(const pair<char,int>&left, const pair<char,int>&right){
    return left.second < right.second;
>>>>>>> 6905fddb0fe5696b17137bdfa296fe2d1af3a76b
}
int main()
{
<<<<<<< HEAD
    vector<vector<int>> coords = { {4, -3},
                                   {1, 0},
                                   {3, -1},
                                   {0, -1},
                                   {-5, 2} };
    cout<<checkStraightLine(coords);
}
=======

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
>>>>>>> 6905fddb0fe5696b17137bdfa296fe2d1af3a76b
