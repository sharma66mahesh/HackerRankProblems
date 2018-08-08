//input hours and minutes in numbers and print it back in string
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        string s;
        cin >> s;
        bool x = next_permutation(s.begin(), s.end());
        if(!x)
            cout << "no answer\n";
        else
            cout << s;
    }
}
