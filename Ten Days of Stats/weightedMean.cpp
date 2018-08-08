#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[2][n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[0][i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> a[1][i];
    }


    int sum = 0, sumWt = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[0][i] * a[1][i];
        sumWt += a[1][i];
    }

    cout << fixed << setprecision(1) << float(sum)/sumWt << endl;
}
