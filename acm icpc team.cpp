#include<iostream>

using namespace std;

int countOnes(string s)
{
    int noOfOnes = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1')
            noOfOnes++;
    }
    return noOfOnes;
}

string bitwiseOr(string x, string y)
{
    string res;
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] == '1' || y[i] == '1')
            res.insert(i, 1, '1');
        else
            res.insert(i, 1, '0');
    }
    return res;
}

string maximum(string x, string y)
{
    string res;
    int x1s = 0, y1s = 0;
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] == '1')
            x1s++;
        if(y[i] == '1')
            y1s++;
    }

    x1s > y1s ? res = x : res = y;
    return res;
}


int main()
{
    int n, m;
    int maxTopics = 0;
    cin >> n >> m;
    string str[n], maxim, temp, tmp1, common;
    maxim.insert(0, m, '0');    //insert '0' at 0th position m times


    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            temp = bitwiseOr(str[i], str[j]);
            tmp1 = maxim;
            maxim = maximum(temp, maxim);
            if(countOnes(temp) == countOnes(maxim))
            {
                maxTopics= maxTopics + 1;
                if(maxim != tmp1)
                    {
                        maxTopics = 0;
                    }
            }
        }
    }

    cout << countOnes(maxim) << endl << maxTopics + 1;
}
