#include<bits/stdc++.h>
using namespace std;

int n,m;
string ar[1000];
int maxTopic(){
    int cntTopic,mx = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            cntTopic = 0;
            for(int k = 0; k < m; k++){
                if(ar[i][k] == '1' || ar[j][k] == '1')cntTopic++;
            }
            mx = max(mx,cntTopic);
        }
    }
    return mx;
}
int maxTeam(int mxTopic){
    int cntTeam,mx = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            cntTeam = 0;
            for(int k = 0; k < m; k++){
                if(ar[i][k] == '1' || ar[j][k] == '1')cntTeam++;
            }
            mx += (cntTeam == mxTopic)?1:0;;
        }
    }
    return mx;
}
int main(){
    int mxTopic = 0,mxTeam = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> ar[i];
    cout << maxTopic() << endl;
    cout << maxTeam(maxTopic()) << endl;
    return 0;
}