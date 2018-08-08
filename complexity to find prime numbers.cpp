#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        int flag = 1;
        cin >> a[n];
        if(a[n] == 1)
        {
            cout << "Not prime\n";
            continue;
        }

        int s = sqrt(a[n]);
        for(int j = 2; j <= s; j++)
        {
            if(a[n] % j == 0)
            {
                cout << "Not Prime\n";
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "Prime\n";
    }
    return 0;
}
