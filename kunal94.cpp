#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i,k, max, min;
    cin >> n,k;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    int check=max-min;
    cout<<check;
    return 0;
}