/*

    erase(int position):

    Removes the element present at position.
    Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)

    erase(int start,int end):

    Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
    Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)
*/
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
    int x;
    vector<int> arr;
    for(int i =0; i < n; i++){
        cin >> x;
        arr.push_back(x);
    }

    int indexDelete;
    cin >> indexDelete;
    arr.erase(arr.begin() + indexDelete - 1);

    int a, b;
    cin >> a >> b;
    arr.erase(arr.begin()+a-1, arr.begin()+b-1);

    cout << arr.size() << endl;
    for(auto y : arr)
        cout << y << ' ';
    return 0;
}
