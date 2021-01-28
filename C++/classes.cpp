#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

class MyCalendarTwo
{
public:
    map<vector<int>, int> mp;
    MyCalendarTwo()
    {
    }

    bool book(int start, int end)
    {
        for (auto x : this->mp)
        {
            int tempstart = x.first[0];
            int tempend = x.first[1];
            cout<<tempstart<<" "<<tempend<<" "<<x.second<<endl;
            if (start < tempend && start >= tempstart)
                if (x.second == 2)
                    return false;
        }
        vector<int> r = {start, end};
        bool flag = false;
        for (auto x : this->mp)
        {
            if (r == x.first)
            {
                x.second++;
                flag = true;
            }
        }
        if (!flag)
            mp[r]++;
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
signed main(){
    MyCalendarTwo* obj = new MyCalendarTwo();
      cout<<obj->book(10,20)<<endl;
      cout<<obj->book(12,50)<<endl;
      cout<<obj->book(14,42)<<endl;
}