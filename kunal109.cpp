#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<set>
using namespace std;
int mex(unordered_set<int> a)
{
    int i=0;
    while(a.count(i++)!=0);
    return --i;

}
vector<int> getans(vector<int> v,vector<vector<int>> mat)

{
    vector<int> ans(v.size(),-1);
    unordered_set<int> a;
    for(auto i:v)
    {
        a.clear();
        for(auto j:mat[i])
        a.insert(ans[j]);
        ans[i]=mex(a);
        cout<<i<<" "<<ans[i]<<"\n";


    }
    return ans;

}
int main()
{
    int t,n,a,b,i,degree;
    cin>>t;
    while(t)
    {
        cin>>n;
        vector<vector<int>> mat(n);
        vector<int> degre(n);
        vector<int>vertex(n);
        set<vector<int>> se;
        for(i=0;i<n-1;i++)

        {
            vertex[i]=i;
            cin>>a>>b;
            a--,b--;
            mat[a].push_back(b),mat[b].push_back(a);

        }
        vertex[n-1]=n-1;
        do
        {
        ////degree=getans(vertex,mat);
        se.insert(getans(vertex,mat));

           
        } while (next_permutation(vertex.begin(),vertex.end()));
        cout<<se.size()<<"\n";
        t--;

        
    }
    return 0;
}
