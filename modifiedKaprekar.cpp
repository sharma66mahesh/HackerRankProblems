/*print all the kaprekar numbers between the entered numbers(inclusive)
kaprekar number:
        45^2 = 2025
        divide this number into two halves such that right one contains d and left one contains d or d-1 chars
        20 + 25 = 45.
        thus this is a kaprekar number
*/

#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;

int toInt(string s)
{
    if(s.empty())
        return 0;
    stringstream ss;
    ss << s;
    int res;
    ss >> res;
    return res;
}

bool checkKaprekar(int n)
{
    int org = n;
    long long num = static_cast<long long>(n) * n;
    stringstream ss;
    string s1, s2;
    ss << num;
    int strlen = ss.str().length();
    for(int i = 0; i < strlen; i++)
    {
        if(i < (strlen)/2)
            s1.push_back(ss.str().at(i));
        else
            s2.push_back(ss.str().at(i));
    }
    if(toInt(s1) + toInt(s2) == org)
        return true;
    else
        return false;
}

int main()
{
    int low, up;
    bool flag = false;
    int counter = 0;
    cin >> low >> up;
    for(int i = low; i <= up; i++)
    {
        flag = checkKaprekar(i);
        if(flag){
            cout << i << ' ';
            counter++;
        }
    }
    if(!counter)
        cout << "INVALID RANGE";
}
