#include<iostream>
using namespace std;
int main()
{
    int t,N,K,X,Y,r=0;
    scanf("%d",&t);
while(t-->0)
    {
        
            scanf("%d%d%d%d",&N,&K,&X,&Y);

        
        
    
    for(int p=1;p<=N;p++)
    {
        if((X+K)%N==Y)
        printf("YES");
        r--;
        break;
    }
    if(Y>N)
    {
        printf("NO");

    }
    }


    
    return 0;
}