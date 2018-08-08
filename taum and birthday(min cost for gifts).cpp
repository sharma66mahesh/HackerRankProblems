#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, x, y, z, b, w, cost = 0;
    int to;
    cin >> t;
    while(t--){
        cost = 0;
        cin >> b >> w >> x >> y >> z;
        if(x > y){
            if(x > (y+z)){
                cost += y * w + (y+z) * b;
            }
            else
                cost += y * w + x * b;
        }
        else{
            if(y > (x+z)){
                cost += (x+z) * w + x * b;
            }
            else
                cost += y * w + x * b;
        }
    cout << cost << endl;
    }

    return 0;
}

