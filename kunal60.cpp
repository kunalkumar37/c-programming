#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;int p;
    for(int i=1;i<=t;i++)
    {
        int arr[p];
        cin>>arr[p];
        for(int j=1;j<=arr[p];j++)
        {
            cin>>j;
            if (arr[j-1]<arr[j])
            return 1;

            {
                if(arr[j-1]>=arr[j]&arr[j-1]^arr[j])
                {
                    cout<<j;

                }
                else {
                    return -1;

                }

            }
        }

    }
    return 0;
}