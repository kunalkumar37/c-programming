#include<bits/stdc++.h>
using namespace std;
vector<string> split(const string &s,char delim)
{
    vector<string>elems;
    stringstream ss(s);
    string item;
    while(getlines(ss,item,delim))
    elems.push_back(item);
    return elems;
}