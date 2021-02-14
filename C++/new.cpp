#include <bits/stdc++.h>
using namespace std;
#define mod (int)(1e9+7);
int main()
{

    int n;
    cin >> n;
    vector<vector<int>>coins(n, vector<int>(n,0));
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>coins[i][j];
        }
    }
    

    return 0;
}
