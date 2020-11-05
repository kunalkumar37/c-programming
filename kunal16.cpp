#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map> 
using namespace std;
map <long long,vector <long long>> e; 

long dfs(map <long long,vector<long long>> ei, vector <bool> &vi,long long ti){ 
    if(vi[ti] == true){
        return 0;
    }else{
    }  

    vi[ti] = true; 
    long long ci =1; 
    for(long i=0; i<ei[ti].size(); ++i){
        ci+= dfs(ei,vi,ei[ti][i]);    
    }
    return ci; 
} 

int main() {
    long long n,p,q,z; 
    cin >> n >> p; 
    vector<bool> v;
    for(long i =0; i<n; i++){
        v.push_back(false);   
    }
    for(long i =0; i<n; ++i){
        vector <long long> tv;
        e.insert(pair <long long, vector<long long>>(i,tv)); 
    }
    
    while(p--){
        cin >> q >> z;
        e[q].push_back(z);  
        e[z].push_back(q);
    }


    long long sum = 0; 
    long long as = 0; 
    for(long i =0; i<n; ++i){
        if(v[i] == false){
            long long t=0; 
            t = dfs(e,v,i); 
            sum = sum + (as * t);
            as += t; 
        }else{
        } 
    }
    cout << sum; 

    return 0;
}