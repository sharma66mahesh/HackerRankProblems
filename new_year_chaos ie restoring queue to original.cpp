/*enter deformed queue/line and restore it to its original form keeping in mind that one person can bribe at most 2 people
ahead of him otherwise print the queue is too chaotic*/

#include<iostream>
#include<cstdlib>

using namespace std;

int max_index(int *a, int n, int start_index)
{
    int highest = a[0], index = 0;
    for(int i = 0; i < n - start_index; i++)
    {
        if(a[i] > highest)
        {
            highest = a[i];
            index = i;
        }
    }
//    cout << "Highest number is " << highest << " ANd index is " << index << endl;
    return index;
}

int getToPos(int *a, int index, int last_index)
{
    int temp, no_exhg = 0;
    while(a[index] > a[index + 1] && index != last_index)
    {
        temp = a[index];
        a[index] = a[index + 1];
        a[index + 1] = temp;
        index++;
        no_exhg++;
    }
    return no_exhg;
}

int main()
{
    int no_times;
    cin >> no_times;
    for(int xx = 0; xx < no_times; xx++){
        int n, cnt, tot_cnt = 0;
        int *a;
        //cout << "Enter the number of people in queue\n";
        cin >> n;
        a = new int [n];
        //cout << "Now enter values\n";
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n-1; i++)
        {
            cnt = getToPos(a, max_index(a, n, i), n);
            if(cnt > 2)
            {
                cout << "Too chaotic\n";
                continue;
            }
            tot_cnt += cnt;
        }
        cout << /*"Total number of exchanges is " <<*/ tot_cnt << endl;
        //for(int i = 0; i < n; i++)
          //  cout << a[i] << endl;
    }
}
