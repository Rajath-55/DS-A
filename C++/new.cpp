#include <bits/stdc++.h>
using namespace std;
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
}

int main()
{
    vector<vector<int>> coords = { {4, -3},
                                   {1, 0},
                                   {3, -1},
                                   {0, -1},
                                   {-5, 2} };
    cout<<checkStraightLine(coords);
}
