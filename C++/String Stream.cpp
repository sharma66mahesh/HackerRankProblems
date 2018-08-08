//str is a set of comma separated integers. Our task is to store those ints in a vector<int> and return to the function
/*

    Operator >> Extracts formatted data.
    Operator << Inserts formatted data.
    Method str() Gets the contents of underlying string device object.
    Method str(string) Sets the contents of underlying string device object.

*/
#include <sstream>
#include <vector>
#include <iostream>
#include<sstream>
using namespace std;
//THIS FUNCTION IS TO BE COMPLETED
vector<int> parseInts(string str) {
    vector<int> x;
    int y;
    char c;
    stringstream ss(str);    //ss is class and it has str as one of its members
    while(ss >> y)      //as long as char extracted from ss is a number, it gets stored in y
    {
        x.push_back(y);
        ss >> c;        //eliminate the remaining ',' after the number
    }
    return x;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
