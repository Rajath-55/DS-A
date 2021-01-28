#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> res;
    if (nums.size() == 0 || nums.size() == 1 || nums.size() == 2)
        return {};
    sort(nums.begin(), nums.end());
    set<vector<int>> s;
    for (int i = 0; i < nums.size() - 2; ++i)
    {
        int j = i + 1, k = nums.size() - 1;
        while (j < k)
        {
            int su = nums[i] + nums[j] + nums[k];
            cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
            cout<<su<<endl;
            if (su == 0){
                s.insert({nums[i], nums[j], nums[k]});
                j++;
            }
            if (su > 0)
                k--;
            if (su < 0)
                j++;
        }
    }
    for (auto x : s)
        res.push_back(x);
    return res;
}

int main()
{
    vector<int>temp={-2,0,1,1,2};
    vector<vector<int>>res = threeSum(temp);
    for(auto x : res)
    {
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
}

/*
555
550
505
500
055
050
005
000
*/