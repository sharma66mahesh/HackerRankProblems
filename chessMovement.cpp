#include<iostream>
#include<set>
#include<algorithm>
#include<queue>

using namespace std;

void clear( std::queue<pair<int, int>> &q )
{
   std::queue<pair<int, int>> empty;
   std::swap( q, empty );
}


vector<pair<int, int>> findReachables(pair<int, int> curPos, int i, int j, int n)
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    vector<pair<int, int>> res;
    x1 = curPos.first + i;
    x2 = curPos.first - i;
    x3 = curPos.first + j;
    x4 = curPos.first - j;

    y1 = curPos.second + i;
    y2 = curPos.second - i;
    y3 = curPos.second + j;
    y4 = curPos.second - j;

    res.push_back(make_pair(x1, y3));
    res.push_back(make_pair(x1, y4));
    res.push_back(make_pair(x2, y3));
    res.push_back(make_pair(x2, y4));
    res.push_back(make_pair(x3, y1));
    res.push_back(make_pair(x4, y1));
    res.push_back(make_pair(x3, y2));
    res.push_back(make_pair(x4, y2));
    return res;
}

int main()
{
    int n;
    cin >> n;
    pair<int , int> curPos (0, 0);
    pair<int, int> newPos(0,0);
    vector<pair<int, int>> reachables;
    set<pair<int, int>> visited;
    visited.insert(make_pair(0,0));

    queue<pair<int, int>> q;
    bool flag;
    int counter;

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            visited.clear();
            clear(q);
            counter = 0;
            flag = false;
            while((curPos.first != n-1 && curPos.second != n-1))
            {
                reachables = findReachables(curPos, i, j, n);
                for(auto k : reachables)
                {
                    if(k.first < n && k.second < n && k.first >= 0 && k.second >= 0 && find(visited.begin(), visited.end(), k) == visited.end())
                    {
                        q.push(k);
                        visited.insert(k);
                    }
                }
                if(q.empty())
                    break;
                curPos = q.front();
                q.pop();
                if(find(visited.begin(), visited.end(), make_pair(n-1, n-1)) != visited.end())
                {
                    flag = true;
                    break;
                }
            }
            curPos.first = 0;
            curPos.second = 0;
        }
    }
}
