/*
Little Bobby loves chocolate, and he frequently goes to his favorite store, Penny Auntie, with n dollars to buy chocolates. Each chocolate has a flat cost of c dollars, and the store has a promotion where they allow you to trade in m chocolate wrappers in exchange for 1 free piece of chocolate.

For example, if m = 2 and Bobby has n = 4 dollars that he uses to buy 4 chocolates at c = 1 dollar apiece, he can trade in the 4 wrappers to buy 2 more chocolates. Now he has 2 more wrappers that he can trade in for 1 more chocolate. Because he only has 1 wrapper left at this point and , 1 < m he was only able to eat a total of 7 pieces of chocolate.

Given n, n, and m for trips to the store, can you determine how many chocolates Bobby eats during each trip?
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<map>
using namespace std;

int findChocNumber(int wrappers, int m, int choc)    //returns the number of chocolates that can be bought altogether
{
    int res = 0;
    if(choc)
        res = choc + findChocNumber(wrappers%m+wrappers/m, m, wrappers/m);
    return res;
}

int main() {
    int t, n, m, c;
    cin >> t;
    while(t--)
    {
        cin >> n >> c >> m;
        cout << findChocNumber(n/c,m, n/c) << endl;
    }
    return 0;
}
