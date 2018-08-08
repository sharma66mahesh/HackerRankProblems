#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int med(vector<int> v, int l, int u)
{
    int n,q;
    n = (u+l)/2;
    q = v[n];

    if(n-l > u-n)
        q = (v[n-1] + q) / 2;
    else if(n-l < u-n)
        q = (v[n+1] + q) / 2;

    return q;
}

int main()
{
    int n, x;
    cin >> n;
    vector<int> arr;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    if((arr.size()+1)%2 == 0)   //median is the middle element
    {
        cout << med(arr, 0, (n-3)/2) << endl << arr[(n-1)/2] << endl << med(arr, (n+1)/2, n-1);
    }

    else
    {
        cout << med(arr, 0, (n-2)/2) << endl << (arr[(n-2)/2]+arr[n/2])/2 << endl << med(arr, n/2, n-1);
    }
}
