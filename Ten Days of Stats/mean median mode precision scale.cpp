#include<iostream>
#include<iomanip>
#include<map>
#include<vector>

using namespace std;

void swaps(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int partitions(int *arr, int start, int ends)
{
    int pIndex = start;
    int pivot = arr[ends];
    for(int i = start; i < ends; i++){
        if(arr[i] <= pivot)      //the point till which pIndex points is sorted nicely
        {
            swaps(&arr[pIndex], &arr[i]);
            pIndex++;
        }
    }
    swaps(&arr[pIndex], &arr[ends]);
    return pIndex;
}


void quickSort(int* arr, int start, int ends)
{
    if(start < ends)
    {
        int p = partitions(arr, start, ends);
        quickSort(arr, start, p-1);
        quickSort(arr, p+1, ends);
    }
}


void qSort(int* arr, int n){
    quickSort(arr, 0, n-1);
}


float mean(int* arr, int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (sum/n);
}


float median(int* arr, int n)
{
    if(n == 1)
        return arr[0];
    if((n-1)/2 == (float(n-1)/2)){
        return arr[(n-1)/2];
    }

    return (float(arr[n/2]) + arr[n/2-1])/2;
}


int mode(int *arr, int n)
{
    int x[2] = {arr[0], 1};
    int prev = arr[0];
    int counts = 1;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] == prev){
            counts++;
        }
        else{
            if(x[1] < counts){
                x[1] = counts;
                x[0] = arr[i-1];
            }
            counts = 1;
        }
        prev = arr[i];
    }
    return x[0];
}


int main()
{
    int n;
    cin >> n;
    int* arr;
    arr = new int [n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    qSort(arr, n);

    cout << fixed << setprecision(1) << mean(arr, n) << endl << median(arr, n) << endl << mode(arr, n);
}
