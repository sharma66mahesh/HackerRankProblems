/*Sean invented a game involving a matrix where each cell of the matrix contains an integer. He can reverse any of its rows or
columns any number of times, and the goal of the game is to maximize the sum of the elements in the submatrix located in the
upper-left corner of the matrix (i.e., its upper-left quadrant).

Given the initial configurations for matrices, help Sean reverse the rows and columns of each matrix in the best possible way
so that the sum of the elements in the matrix's upper-left quadrant is maximal. For each matrix, print the maximized sum on a
new line.
*/
#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int j = 0; j < t; j++)
    {
        int n, sum = 0;
        cin >> n;
        int **a;
        a = new int* [2*n];

//-------------------memory allocation and data definition--------------------
        for(int i = 0; i < 2*n; i++)
        {
            *(a+i) = new int [2*n];
        }
        for(int i = 0; i < 2*n; i++)
            for(int k = 0; k < 2*n; k++)
                cin >>a[i][k];

//-------------------actual program--------------------
        for(int i = 0; i < n; i++)
        {
            for(int k = 0; k < n; k++)
            {
                int maxx = max(max(a[i][k], a[i][2*n-k-1]), max(a[2*n-i-1][k], a[2*n-i-1][2*n-k-1]));
                sum += maxx;
            }
        }
        cout << sum << endl;

//----------------------memory deletion----------------------
        for(int i = 0; i < n; i++)
        {
            delete [] a[i];
        }
        delete [] a;
        a = 0;
    }
}
