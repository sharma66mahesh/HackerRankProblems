#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int exp[3], sub[3];
    cin >> sub[0];
    cin >> sub[1];
    cin >> sub[2];
    cin >>exp[0];
    cin >>exp[1];
    cin >>exp[2];
    if(exp[2] < sub[2])
    {
        cout << 10000 << endl;
    }
    else if(exp[2] == sub[2])
    {
        if(exp[1] < sub[1])
        {
            cout << 500 * (sub[1]-exp[1]) << endl;
        }
        else if(exp[1] == sub[1])
        {
            if(exp[0] < sub[0])
            {
                cout << 15 * (sub[0] - exp[0]) << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }

    else
    {
        cout << 0 << endl;
    }
    return 0;
}
