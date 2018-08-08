/*alter the size of stack until the sum is same on all stacks
Note:   though the name is stack, here it means the numbers entered at the first are popped out first*/

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

bool check(int a, int b, int c)
{
    if(a == b && a == c)
        return 1;
    else
        return 0;
}

int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
    }

    int s1, s2, s3;

    s1 = accumulate(h1.begin(), h1.end(), 0);

    s2 = accumulate(h2.begin(), h2.end(), 0);

    s3 = accumulate(h3.begin(), h3.end(), 0);
    int i = 0, j = 0, k = 0;
    while(1)
    {
        if(s1 == 0 || s2 == 0 || s3 == 0)
        {
            cout << 0 << endl;
            exit(1);
        }

        if(check(s1, s2, s3))
            break;
        if(s1 >= s2 && s1 >= s3)
        {
            s1 -= h1[i];
            i++;
        }
        else if(s2 > s1 && s2 >= s3)
        {
            s2 -= h2[j];
            j++;
        }
        else
        {
            s3 -= h3[k];
            k++;
        }


    }

    cout << s1 << endl;

    return 0;
}
