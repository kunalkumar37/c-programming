#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[10][10];
    int arr2[10][10];
    int mutiply[10][10];
    int a,b,c,d,i,j,k,l,p,q;
    int sum=0;
    cin>>"enter the number of row and columns of firt array you want!!!\n";
    cin>>a>>b;
    for (int i=0;i<=a;i++)
    {
        for (int j=0;j<=b;j++)

        {
            cin>>[i]>>[j];

        }
    }
    int p,q;
    cout<<"enter the number of rows and columns of second array!!!\n";
    cin>>p>>q;
    if(a!=p)
    {
        cout<<"array cannnot be multiplied\n";
    }
    else
    {
    for(int k=0;k<=p;k++)
    {
        for(int l=0;l<=q;l++)
        {
            cin>>[k]>>[l];

        }
    }

    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=b<j++)

        {
            for(int k=0;k<=p;k++)
            int sum=0;
            sum=sum+arr1[i][k]*arr2[k]*[j];
        }
        multiply[i][j]=sum;
        sum=0;
    }

    cout<<"the multiplication of two array!!!\n";
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            cout<<multiply[i][j];
            cout<<"\n";

        }
    }
    }

return 0;
}