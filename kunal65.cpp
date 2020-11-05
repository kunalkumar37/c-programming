#include<iostream>
using namespace std;
//#include<simplecpp>
int main()
{
    const int nstudents=10,nbuckets=11;
    int hist[nbuckets];
    for(int i=0;i<nbuckets;i++)
    hist[i]=0;
    for(int i=0;i<nstudents;i++)
    {
        double  marks;
        cin>>marks;
        hist[int(marks)/10]++;
    }
    for(int i=0;i<nbuckets;i++)
    cout<<i*10<<" to "<<i*10+9<<": "<<hist[i]<<endl;
    return 0;
}