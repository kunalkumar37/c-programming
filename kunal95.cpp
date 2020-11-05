#include<iostream>
using namespace std;
int main()

{
    int n,arr[n][3],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
                cin>>arr[i][j];
                sum=sum+arr[j];


        }
    }
    
    for(int k=0;k<n;k++)
    {
        if(sum[k]=sum[k+1])
        {
            cout<<"1";

        }
        else
        {
            cout<<"0";

        }
        
    }

    return 0;
}