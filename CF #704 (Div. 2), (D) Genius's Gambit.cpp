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

int main()
{
    io;
    // int t;
    // cin>>t;
    // tc(t)
    {
    	ll a,b,k;
    	cin>>a>>b>>k;
     if (k==0){cout<<"YES"<<endl<<string((int)b,'1')<<string(a,'0')<<endl<<
		                             string((int)b,'1')<<string(a,'0');return 0;}
		if (k>a+b-2 || ((a==0||b==1) && k!=0)){cout<<"NO";return 0;}
		
		vector<int> x(a+b,-1);
		vector<int>y(a+b,-1);
		x[0]=1;y[0]=1;y[k+1]=1;x[k+1]=0;y[1]=0;x[1]=1;
		int c=b-2;
		FOR(i,1,a+b){
			if (x[i]==-1){if (c>0){x[i]=1;y[i]=1;c--;}else{x[i]=0;y[i]=0;}}
		}
		cout<<"YES"<<endl;
		FOR(i,0,a+b)cout<<x[i];
		cout<<endl;
		FOR(i,0,a+b)cout<<y[i];

    }
    return 0;
}
