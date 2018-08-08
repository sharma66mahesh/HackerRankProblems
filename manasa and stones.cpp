/*
Manasa is out on a hike with friends. She finds a trail of stones with numbers on them. She starts following the trail and notices that two consecutive stones have a difference of either a or b. Legend has it that there is a treasure trove at the end of the trail and if Manasa can guess the value of the last stone, the treasure would be hers. Given that the number on the first stone was 0, find all the possible values for the number on the last stone.

Note: The numbers on the stones are in increasing order.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, tmp, n, a, b;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        if(b < a){
            tmp = a;
            a = b;
            b = tmp;
        }
        for(int i = 0; i < n; i++){
            cout << a * (n-1-i) + b * i << '\t';
            if(a==b)
                break;
        }
        cout << endl;
    }
    return 0;
}
