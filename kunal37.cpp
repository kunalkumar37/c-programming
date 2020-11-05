#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    const int  *p1=&n;
    int *const p2=&n;
    int const *p3=&n;
    int const *const p4=&n;
    *p1=20;
    *p2=20;
    *p3=20;
    *p4=20;
    cout<<*p1<<endl<<*p2<<endl<<*p3<<endl<<*p4;

    return 0;
}