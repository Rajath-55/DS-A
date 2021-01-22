#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Solution
{
public:
    void bfsprint(vector<vector<int>> v, int sv)
    {
        int n = v.size();
        vector<bool> visited(n, false);
        queue<int> q;
        q.push(sv);
        visited[sv] = true;
        while (!q.empty())
        {
            int cv = q.front();
            q.pop();
            cout << cv << endl;
            for (int i = 0; i < n; ++i)
            {
                if (v[cv][i] && !visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }
    void dfsprint(vector<vector<int>> v, int sv, vector<bool> &visited)
    {
        cout << sv << endl;
        visited[sv] = true;
        int n = v.size();
        for (int i = 0; i < n; ++i)
        {
            if (v[sv][i] && visited[i] == false)
            {
                dfsprint(v, i, visited);
            }
        }
    }
};

string revs(string s, int start, int end)
{

    if (((s[start] >= 'd' && s[start] <= 's') || (s[start] <= 'D' || s[start] <= 'S')) && ((s[end] >= 'd' && s[end] <= 's') || (s[end] <= 'D' || s[end] <= 'S')))
    {
        
        swap(s[start], s[end]);
        
    }

    
    if (end - start <= 2)
    {
        return s;
    }

    return revs(s, start + 1, end - 1);
}

int main()
{
   string s;
   getline(cin,s);
   cout<<revs(s, 0, s.size()-1)<<endl;
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