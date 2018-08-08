/*in a sorted stl, lower_bound searches for given value between given iterators and returns iterator to that value if found.
If not found it returns the index of another value just greater than given value.
NOTE:IN THIS PROGRAM THE USER INPUTS SORTED VALUES, SO WE NEED NOT SORT THE VECTOR.
*/
/*You are given n integers in the sorted order. Then you are given q queries. In each query you will be given an integer and you have to tell whether that integer is present in the array, if so you have to tell at which index it is present and if it is not present you have to tell the index at which the smallest integer that is just greater than the given number is present.
Lower bound is a function that can be used with a sorted vector
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n;
    vector<int> arr;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        arr.push_back(x);
    }

    cin >> q;
    while(q--){
        cin >> x;
        auto low = lower_bound(arr.begin(), arr.end(), x);
        if(*low == x){
            cout << "Yes" << ' ' << low-arr.begin()+1 << endl;
        }
        else{
            cout << "No" << ' ' << low-arr.begin()+1 << endl;
        }
    }
    return 0;
}
