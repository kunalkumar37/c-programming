#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
        int [] asteriodcollision(int [] asteriods)
        {
            linkedlist<integer> q=new linkedlist<integer>();
            for(int i=0;i<asteriods.length;i++)
            {
                int speed =asteriods[i];
                if (speed>0 || q.isempty() || q.peeklast()<0)
                {
                    q.add(speed);
                    continue;

                }
                int pre=q.peeklast();
                if (pre>-speed)
                {
                    continue;
                }
                else if (pre== -speed)
                {
                    q.polllast();

                }
                else
                {
                    /* code */
                    q.polllast();
                    i--;

                }
                
            }
            int [] res=new int[q.size()];
            int i=0;
            for(integer num:q)
            {
                res[i++]=num;

            }
            return res;
            
        }
}