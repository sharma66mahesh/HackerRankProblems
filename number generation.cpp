/*Generate maximum numbers containing only five and three of specified digits such that:
    1. No. of 5s is divisible by 3
    2. No. of 3s is divisible by 5
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class ERR{};

string genString(int n)
{
    string s;
    for(int i = 0; i < n; i++)
    {
        s.push_back('5');
    }
    return s;
}

void modify(string &s)
{
    int n = s.find_last_of('5');
    if(n == string::npos)
        throw ERR();
    s.replace(n, 1, "3");
}

void checkNo(string &s, bool &flag)
{
    do{
        flag = 1;
        int fives = 0, threes = 0;
        string::iterator it = s.begin();
        while(it != s.end())
        {
           if(*it == '5')
                fives++;
           else if(*it == '3')
                threes++;
            it++;
        }

        if(fives % 3 != 0 || threes % 5 != 0)
        {
            flag = 0;
            modify(s);
        }

    }while(flag == 0);
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int noOfTime;
    cin >> noOfTime;
    while(noOfTime)
    {
        int N;
        bool flag = 1;
        cin >> N;
        string s = genString(N);
        try
        {
            checkNo(s, flag);
            cout << s << endl;
        }

        catch(ERR)
        {
            cout << -1 << endl;
        }
        noOfTime--;
    }
}
