#include <bits/stdc++.h>
using namespace std;
int  factorial(long long);
int  countdivisors(long long);

int main()
{
  long  t;
  long long arr[10000],var,z;
  
  
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>arr[i];
    z=arr[i]+1;
    if(countdivisors(z)&1 == factorial(countdivisors(arr[i]) & 1))
    {
      cout<<z<<endl;
      
    }
    else
    return 0;
    
    
    
  }
  
  return 0;
}
int  countdivisors(unsigned long long var)
{
  int cnt=0;
  for(int i=1;i<=sqrt(var);i++)
  {
    if(var%i==0)
    {
      if(var%i==i)
      cnt++;
      else
      cnt=cnt+2;
    }
  }
  return cnt;
}
int  factorial(unsigned long long p)
{
  int fact;
  if(p==0 || p==1)
  {
    fact= 1;
  }
  else
  
  {
    fact=fact*(p-1);
  }
  return fact;
}