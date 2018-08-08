/*Erica wrote an increasing sequence of n numbers () in her notebook. She considers a triplet to be beautiful if:
i<j<k And a[j] - a[i] = a[k] - a[j] = d
Given the sequence and the value of d, can you help Erica count the number of beautiful triplets in the sequence?
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Triplets
{
    private:
    int n, d;
    vector<int> numbers;

    public:
    Triplets()
    {
        int x;
        cin >> n;
        cin >> d;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            numbers.push_back(x);
        }
    }

    int countTriplets()
    {
        int counts = 0;
        vector<int>::iterator it1, it2;
        for(auto x: numbers)
        {
            it1 = find(numbers.begin(), numbers.end(), x+d);
            it2 = find(numbers.begin(), numbers.end(), x+2*d);
            if(it1 != numbers.end() && it2 != numbers.end())
                ++counts;
        }
        return counts;
    }
};

int main()
{
    Triplets instance;
    cout << instance.countTriplets();
}
