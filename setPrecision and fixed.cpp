#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "Hacker ";
    int x;
    double y;
    string z;
    // Declare second integer, double, and String variables.

    // Read and save an integer, double, and String to your variables.
    cin >> x >> y;
    cin.ignore();
    getline(cin, z);
    // Print the sum of both integer variables on a new line.
    cout << x + i << endl;
    // Print the sum of the double variables on a new line.
    cout << setprecision(1) << fixed << y + d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    s.append(z);
    cout << s;
}
