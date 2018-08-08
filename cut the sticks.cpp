/*subtract the length of smallest stick till the maximum length becomes zero and print the number of stick with length > 0
in each step*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int minimum(vector<int> a, int n)
{
    int temp;
    for(int i = 0; i < n; i++)//setting temp to non zero value
    {
        if(a[i] > 0)
        {
            temp = a[i];
            break;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0 && a[i] < temp)
            temp = a[i];
    }

    return temp;
}

int max_index(vector<int> a, int n)
{
    int m = a[0], index = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] > m)
        {
            m = a[i];
            index = i;
        }
    }
    return index;
}

int main(){
    int n, cnt;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    int index_no = max_index(arr, n);

    while(arr[index_no] > 0)
    {
        cnt = 0;
        int m = minimum(arr, n);
        for(int arr_i = 0;arr_i < n;arr_i++)
        {
            if(arr[arr_i] > 0)
                cnt++;
           arr[arr_i] -= m;
        }
        cout << cnt << endl;
    }
    return 0;
}
