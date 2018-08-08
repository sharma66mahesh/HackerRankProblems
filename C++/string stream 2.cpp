#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    stringstream s;     //2 strings in s are separated by ' '. so a stores the first and b the second string. '\n' also works.
    string ss, a, b;
    cin >> ss;
    s << ss;
    s << '\n';
    cin >> ss;
    cout << "string is " << ss << endl;
    s << ss;
    s >> a >> b;
    cout << "a = " << a << endl << "b = " << b;
}
