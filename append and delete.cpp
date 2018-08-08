/*You have a string,s , of lowercase English alphabetic letters. You can perform two types of operations on :

    Append a lowercase English alphabetic letter to the end of the string.
    Delete the last character in the string. Performing this operation on an empty string results in an empty string.

Given an integer,k , and two strings, s and , t determine whether or not you can convert s to t by performing exactly k of the above operations on s. If it's possible, print Yes; otherwise, print No.
*/

#include<iostream>

using namespace std;


int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k;
    cin >> k;

    //find the number of common characters starting from the first char of s and t
    int noOfCmnChrs = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != t[i])
            break;
        noOfCmnChrs++;
    }

    int minSteps = (s.length() - noOfCmnChrs) + (t.length() - noOfCmnChrs);
    string out;

    if(k < minSteps)
        out = "No";
    else if((k-minSteps)%2 == 0)
        out = "Yes";
    else if(k >= s.length() + t.length())
        out = "Yes";
    else
        out = "No";
    cout << out;
    return 0;
}
