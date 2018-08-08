/*
Jaime the Tailor's new customer wants to add n distinct clusters to her dress, where each cluster is filled with a distinct number of buttons of a certain color. In other words, no two clusters should have the same color buttons.

The customer also has specific ideas about how much she wants to pay for each cluster in that for some cluster i , she wants to pay at least a[i] dollars. In addition, she wants each cluster to contain a distinct number of buttons. And, finally, she wants to minimize her total cost.

Jaime stocks an infinite number of buttons in an infinite number colors at his shop, and each button costs p dollars. Given n, p, and the amount of money that the customer wants to pay for each respective cluster, help Jaime by finding and printing a long integer denoting the minimum number of buttons he can use to satisfy her request.

Input Format

The first line contains two space-separated integers denoting the respective values of n and p.
The second line contains n space-separated integers where each integer i denotes the value of a[i](i.e., the minimum amount of money she wants to spend on cluster i).

Output Format

Print a single long integer denoting the minimum number of buttons required for Jaime to satisfy his customer's request.
*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    long int n, p, x, sum = 0;
    cin >> n >> p;
    vector<long int> arr;
    while(n--)
    {
        cin >> x;
        arr.push_back(x);
    }

    int temp;
    vector<long int> used;
    for(long int i = 0; i < arr.size(); i++)
    {
        //this will round off each array element to its nearest larger value that is divisible by p
        if((static_cast<double>(arr[i]) / p) != (arr[i] / p))
        {
            arr[i] = arr[i] + (p - arr[i]%p);
        }

        temp = arr[i] / p;
        while(find(used.begin(), used.end(), temp) != used.end())
        {
            temp += 1;
        }
        used.push_back(temp);
        sum += temp;
    }
    cout << sum << endl;
}
