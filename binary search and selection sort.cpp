#include<cstdio>


bool find(int lower, int upper, int val, int values[])
{
    if(upper < lower)
        return 0;
    int mp = (lower + upper) / 2;
    if(values[mp] == val)
        return true;
    else if(upper != lower)
        return (find(lower, mp, val, values) || find(mp+1, upper, val, values));
    else
        return false;
}

bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if(find(0, n-1, value, values))
        return true;
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    if(n < 2)
        return;
    int i, j, temp;
    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(values[i] > values[j]){
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }
    return;
}


int main()
{
    int arr[] = {32,325,523,23,532,532,23,5,6,7,8,2};
    sort(arr, 12);
    int i;
    for(i = 0; i < 12; i++)
        printf("%d\n", arr[i]);
    if(search(3, arr, 12))
        printf("FOUND~~");
}
