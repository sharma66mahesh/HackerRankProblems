//print total number of numbers less than n such that n + a = n XOR a
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    long long int n, x;
    cin >> n;
    long long sum = 0;
    while(n)
    {
        sum += n % 2 == 0 ? 1 : 0;
        n /= 2;
    }
    cout << setprecision(15);       //bigger numbers are displayed in scientific notation by default, so...
    cout << pow(2, sum);
}
