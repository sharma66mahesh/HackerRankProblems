//input hours and minutes in numbers and print it back in string
#include<iostream>
#include<cstdio>
using namespace std;

string msg(int m, string arr[])
{
    if(m == 1)
        return arr[1] + " minute";
    if(m <= 13)
        return arr[m] + " minutes";
    else if(m == 15)
        return "quarter";
    else if(m > 13 && m < 20)
    {
        string x = arr[m%10] + "teen minutes";
        return x;
    }
    else if(m > 20)
    {
        string y = arr[20] + " " + arr[m%20] + " minutes";
        return y;
    }
    else
        return arr[20] + " minutes";
}

int main()
{
    int n;
    cout << "HOW MANY TIMES??\n";
    cin >> n;
    for(int i = 0; i < n; i++){
        int h, m;
        cin >> h;
        cin >> m;

        string arr[30] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen"
                        , "", "", "", "", "", "", "twenty"};

        if(m == 0)
            cout << arr[h] << " o' clock\n";
        else if(m == 30)
            cout << "half past " << arr[h] << endl;
        else if(m < 30)
        {
            string z =  msg(m, arr);
            cout << z << " past " << arr[h] << endl;
        }
        else
        {
            string z = msg(60 - m, arr);
            cout << z << " to " << arr[h%12+1] << endl;
        }
    }
}
