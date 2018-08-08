/*
You are given a square map of size n*n. Each cell of the map has a value denoting its depth. We will call a cell of the map a cavity if and only if this cell is not on the border of the map and each cell adjacent to it has strictly smaller depth. Two cells are adjacent if they have a common side (edge).

You need to find all the cavities on the map and depict them with the uppercase character X.
IF THERE IS CAVITY PRINT X ELSE PRINT THE ORIGINAL NUMBER AT THAT POSITION
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(!i || !j || !(n-1-i) || !(n-1-j))
                cout << arr[i][j];
            else
            {
                if(arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i][j+1] && arr[i][j] > arr[i][j-1])
                    cout << 'X';
                else
                    cout << arr[i][j];
            }
        }
        cout << endl;
    }
}
