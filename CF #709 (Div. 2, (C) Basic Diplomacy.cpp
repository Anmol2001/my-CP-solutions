#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<long,long> pl;
typedef pair<ll,ll> pll;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vl> vvl;
typedef vector<vll> vvll;

#define FOR(i,a,b) for(long long i=a;i<b;++i)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define tc(t) while(t--)
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
bool sortbysec(const pair<int,int>&a,const pair<int,int> &b){return (a.S<b.S);}
int main()
{
    io;
    int t;
    cin>>t;
    tc(t)
    { 
    	int n,m;
    	cin>>n>>m;
        vector<pair<int,int>> si(m);
        vector<vector<int> > li(m);
        int inps;
     	FOR(i,0,m)
      	{   cin>>inps;
            si[i]=mp(i,inps); 
      		FOR(j,0,si[i].S){int inp;
      		cin>>inp;li[i].pb(inp);
      	                  }

      	}
        sort(si.begin(),si.end(),sortbysec);
    vector<int> count(n,0);
    bool f=0;
    vector<int>ans(m);

    FOR(i,0,m)
      { FOR(j,0,si[i].S){
          if (count[li[si[i].F][j]-1]<(m+1)/2){count[li[si[i].F][j]-1]+=1;ans[si[i].F]=li[si[i].F][j];break;}
          if (j==si[i].S-1){cout<<"NO"<<endl; f=1;break;}
                 }if(f)break;
    }
    if (f==0){cout<<"YES"<<endl;FOR(k,0,m)cout<<ans[k]<<" ";cout<<endl; }	
    }
    return 0;
}
