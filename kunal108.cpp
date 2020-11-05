#include<iostream>
using namespace std;
int main()
{
    class Solution{
    public:
        int findnumberoflis(vector<int> & nums)
        {
            const int n=nums.size();
            if(n<2)
            return n;
            vector<int> lens(n,1);
            vector<int> cnts(n,1);
            for(int i=1;i<n;i++)
            for(int j=0;j<i;j++)
            if(nums[j]<nums[i])
            {
                if(lens[j]+1>lens[i])
                {

                    lens[i]=lens[j]+1;
                    cnts[i]=cnts[j];

                }
                else if(lens[j]+1==lens[i])
                {
                    cnts[i]+=cnts[j];

                }
            }
            int maxlen=*max_element(lens.begin(),lens.end());
            int ans=0;
            for(int i=0;i<n;i++)
            if(lens[i]==maxlen)
            ans +=cnts[i];
            return ans;

        }
    };
          
}