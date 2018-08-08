#include<iostream>
using namespace std;
const int MAX = 200;

int multiply(int x, int fact[], int fact_size)
{
    int carry = 0;
    for (int i=0; i<fact_size; i++)
    {
        int prod = fact[i] * x + carry;
        fact[i] = prod % 10;
        carry  = prod/10;
    }
    while (carry)
    {
        fact[fact_size] = carry%10;
        carry = carry/10;
        fact_size++;
    }
    return fact_size;
}

int main()
{
    int N;
    cin>>N;

    int fact[MAX];
    fact[0] = 1;
    int fact_size = 1;
    for (int x=2; x<=N; x++)
        fact_size = multiply(x, fact, fact_size);
    for (int i=fact_size-1; i>=0; i--)
        cout << fact[i];

}
