/*To find if the two kangaroos at x1 and x2 who jump a distance of v1 and v2 on each jump respectively land at the same time
or not*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void arrange(int &x1, int &x2, int &v1, int &v2)
{
    int temp;
    if(x1 > x2)
    {
        temp = x1;
        x1 = x2;
        x2 = temp;

        temp = v1;
        v1 = v2;
        v2 = temp;
    }
}

int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;

    arrange(x1, x2, v1, v2); //store smaller number in x1 and larger one in x2

    while(x1 <= x2)
    {
        if(x1 == x2)
        {
            cout << "YES";
            break;
        }

        x1 += v1;
        x2 += v2;
    }

    if(x1 > x2)
        cout << "NO";
    return 0;
}
