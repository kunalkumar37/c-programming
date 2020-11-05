#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct Workshop
{
    int start;
    int duration;
    int end;

};
struct Available_workshops

{
    int N;
    vector<Workshop> v;
    Available_Workshops(int &n)

    {
        v=vector<Workshop>(n);
        N=n;
    }
};
bool compare(Workshop &w1,Workshop &w2)
{
    return w1.end <w2.end;

}
Available_workshops *intialize(int start_time[],int duration[],int n)
{
    Available_workshops *AW=new Available_workshops(n);
    for (int i=0;i<n;i++)
    {
        AW->v[i].start=start_time[i];
        AW->v[i].duration=duration[i];
        AW->v[i].end=start_time[i]+duration[i];

    }
    sort(AW->v.begin(),AW->v.end(),compare);
    return AW;

}
int CalculateMaxWorkshops(Available_workshops *ptr)

{
    int end_time=0;
    int count=0;
    for(int i=0;i<ptr->N;i++)
        if(ptr->v[i].start>=end_time)
        {
            end_time=ptr->v[i].end;
            count=count+1;

        }
        return count;

}