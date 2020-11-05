#include<bits/stdc++.h>
using namespace std;
class solution 
{
    public:
        int maxdisttoclosest(vector<int>& seats)
        {
            int n=seats.size();
            int left[n],right[n];
            memset(left,0,sizeof left);
            memset(right,0,sizeof right);
            left[0]=seats[0]==1?0:-1;
            for(int i=1;i<n;i++)
            {
                if(seats[i]==0)
                
                {
                    left[i]=left[i-1];

                }
                else
                {
                    left[i]=i;

                    
                }
                

                
            }
            right[n-1]=seats[n-1]==1?n-1:n;
            for(int i=n-2;i>=0;i--)
            {
                if(seats[i]==0)
                {

                    right[i]=right[i+1];

                }
                else
                {
                    right[i]=i;
                }
                
            }
            int res=INT_MIN;
            for(int i=0;i<n;i++)
            {
                if(seats[i]==0)


                {
                    int left_dis=left[i]==-1?INT_MAX:i-left[i];
                    int right_dis=right[i]==n?INT_MAX:right[i]-1;
                    res=max(res,min(left_dis,right_dis));

                }
            }
            return res;


            
            
        } 
};