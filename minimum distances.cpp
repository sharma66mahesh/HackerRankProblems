/*
Consider an array of n integers, in A. The distance between two indices, i and j, is denoted by d(i,j) = abs(i-j).

Given A, find the minimum d(i,j) such that a(i) = a(j) and i != j. In other words, find the minimum distance between any pair of equal elements in the array. If no such value exists, print -1.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<map>
using namespace std;


int main() {
    int n, mins =1000000;
    cin >> n;
    int a[n];
    map<int, int> num;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(num.find(a[i]) != num.end())
        {
            if(mins > i - num[a[i]])
                mins = i - num[a[i]];
        }
        num.insert(make_pair(a[i], i));

    }
    int res = mins < 1000000 ? mins : -1;
    cout << res;
    return 0;
}
