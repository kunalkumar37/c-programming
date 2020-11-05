#include<iostream>
using namespace std;

int main()
{
int n;
cin >> n;
int arr[n];
int i, sum = 0;
for(i = 0; i < n; i++)
{
cin >> arr[i];
}

for(i = 0; i < n; i++)
sum = sum + arr[i];
cout << sum;
return 0;
}