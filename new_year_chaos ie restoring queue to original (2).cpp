#include<iostream>
#include<vector>

using namespace std;

void calc(vector<int> q)
{
    int ans = 0;
    for (int i = q.size() - 1; i >= 0; i--) {
        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = max(0, q[i] - 2); j < i; j++){
            cout << i <<'\t' << max(0, q[i] - 2) << endl;
            if (q[j] > q[i]) ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    int no;
    cin >> no;
    for(int y = 0; y < no; y++){
        vector<int> a;
        int n, x;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }


        calc(a);
    }
}
