#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealCost;
    int tipPercent, taxPercent;
    cin >> mealCost >> tipPercent >> taxPercent;
    double totalCost = mealCost + mealCost * tipPercent / 100 + mealCost * taxPercent / 100;
    if(totalCost + 0.5 >= int(totalCost) + 1)
        cout << "The total meal Cost is " << static_cast<int>(totalCost) + 1 << " dollars.";
    else
        cout << "The total meal Cost is " << static_cast<int>(totalCost) << " dollars.";
    return 0;
}
