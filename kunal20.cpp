#include <bits/stdc++.h>
using namespace std;

#define INF 1000000007

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int> > vvi;
typedef pair<int,int> ii;
typedef vector<pair<int,int> > vii;
typedef vector<vector<pair<int,int> > > vvii;

#define all(x) (x).begin(), (x).end()
#define nall(x) (x).rbegin(), (x).rend()
#define tr(x,it) for(auto it = (x).begin();it!=(x).end();++it)
#define ntr(x,it) for(auto it = (x).rbegin();it!=(x).rend();++it)
#define ufy(v) sort(all(v));(v).erase(unique(all((v))),(v).end())
#define sz(a) int((a).size()) 
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back 
#define PB pop_back
#define pf push_front
#define PF pop_front
#define MP make_pair
#define clr clear
#define rz resize
#define C(a,b) memset(a,b,sizeof(a))
#define ia(a,n) FOR(i,0,n-1)cin>>a[i]
#define ia1(a,n) FOR(i,1,n)cin>>a[i]
#define fpresent(c,x) ((c).find(x) != (c).end())  // set,map
#define present(c,x) (find(all(c),x) != (c).end())  //vector
#define F first
#define S second
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define NFOR(i,a,b) for(int i=a;i>=b;--i)
#define rep(i,n) FOR(i,0,n-1)
#define TCASE int __T;cin>>__T;FOR(Tc,1,__T)
inline int add(int a,int b, int m=INF){a+=b;if(a>=m)a-=m;return a;}
inline int mul(int a,int b, int m=INF){return (int)(((ll)a*(ll)b)%m);}
inline int norm(int x,int m=INF){if(x>=m)x%=m;if(x<0)x+=m;return x;}
inline int neg(int x,int m=INF){x=-x;return norm(x);}
const int N=(2e6)*30;
#define mid ((l+r)>>1)
int tree[N],LEFT[N],RIGHT[N],ctr;
vii uu;
void insert(int prev,int now, int l, int r, int val)
{
	while(1)
	{
		if(l==r)
		{tree[now]=tree[prev]+1;break;}
		
		if(val<=mid)
		{
			LEFT[now]=++ctr;
			RIGHT[now]=RIGHT[prev];
			tree[now]=tree[prev]+1;
			prev=LEFT[prev];
			now=LEFT[now];
			r=mid;
		}
		
		else
		{
			RIGHT[now]=++ctr;
			LEFT[now]=LEFT[prev];
			tree[now]=tree[prev]+1;
			prev=RIGHT[prev];
			now=RIGHT[now];
			l=mid+1;
		}
	}
}

int query(int u, int v, int l, int r, int ql, int qr)
{
	if(r<ql or l>qr)return 0;
	if(l>=ql and r<=qr)return tree[v]-tree[u];
	return query(LEFT[u],LEFT[v],l,mid,ql,qr)+query(RIGHT[u],RIGHT[v],mid+1,r,ql,qr);
	
}
int main()
{
    boost;
    int n,k,u,q;
    cin>>n>>k>>u>>q;
    FOR(i,0,u-1)
    {
    	int x,y;
    	cin>>x>>y;
    	uu.pb({x-y,x+y});
    }
    uu.pb({-INF,-INF});
    uu.pb({INF,INF});
    sort(all(uu));
    
    ctr=uu.size()+5;
    
    FOR(i,1,u)
    {
    	insert(i-1,i,1,2e6,uu[i].S);
    }
    int x,y,A,B;
    cin>>x>>y>>A>>B;
    A%=n;
    B%=n;
    do
    {
    	int p1=upper_bound(all(uu),MP(x-y-k,-INF))-uu.begin();
    	int p2=upper_bound(all(uu),MP(x-y+k,INF))-uu.begin();
    	int ans=query(p1-1,p2-1,1,2e6,x+y-k,x+y+k);
    	
    	if(ans)
    	{
    		cout<<"Not Safe\n";
    		x=add(mul(x,A,n),B,n)+1;
    		y=add(mul(y,A,n),B,n)+1;
    	}
    	else
    	{
    		cout<<"Safe\n";
    		x=add(mul(x,B,n),A,n)+1;
    		y=add(mul(y,B,n),A,n)+1;
    	}
    	--q;
    }while(q);
    
	return 0;
}
