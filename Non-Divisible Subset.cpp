//Given a set, S, of distinct integers, print the size of a maximal subset, S', of where the sum of any numbers in are not evenly divisible by k.

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;


    int x;
    vector<int> arr(n);
    map<int, int> occurrence;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x % k;     //store remainder in arr
    }

    bool flag = true;   //suppose all remainders are zero

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            flag = false;
            break;
        }
    }

    if(flag = true)
    {
        cout << 1 << endl;
        return 0;
    }

    int counter;

    for(int i = 0; i < n; i++)      //insert remainder and its occurring frequency in map occurrence
    {
        counter = 0;
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
                counter++;
        }
        occurrence.insert(pair<int, int>(arr[i], counter));
    }

    for(int i = 1; i <= k/2; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[j] == i)
            {
                auto p = find(arr.begin(), arr.end(), k-i);
                if(p != arr.end())      //if true, there is a value such that i + value = k (makes evenly divisible)
                {
                    if(occurrence[i] > occurrence[k-i])
                    {
                        arr.erase(remove(arr.begin(), arr.end(), k-i), arr.end());  //erase all occurrence of k-i
                    }
                    else
                    {
                         arr.erase(remove(arr.begin(), arr.end(), i), arr.end());
                    }
                }
            }
        }
    }

    cout << arr.size() << endl;
}
