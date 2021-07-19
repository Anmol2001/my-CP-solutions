#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#include <bits/stdc++.h>
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>*/

using namespace std;
const int MAX_N = 1e5 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 7;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

#define LSOne(S) (S & (-S))
#define isBitSet(S, i) ((S >> i) & 1)



void solve() {

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        string s;
        int x;
        cin>>s>>x;
        int n=s.size();
        bool done[n]={false};
        char arr[n];
        bool f=1;
        for(int i=0;i<n;i++){
                if (s[i]=='0'){if ( i-x >=0){if (done[i-x]==0 ||(done[i-x]==1 && arr[i-x]=='0')){arr[i-x]='0';done[i-x]=1;}else{f=0;break;}} if (i+x<n){arr[i+x]='0';done[i+x]=1;}}
                else {if ((i-x)<0  &&(i+x)<n){arr[i+x]='1';done[i+x]=1;}else if ((i-x)>=0 &&(i+x)>=n){if (done[i-x]==0 ||(done[i-x]==1 && arr[i-x]=='1')){arr[i-x]='1';done[i-x]=1;}else{f=0;break;}}else if((i-x)<0  &&(i+x)>=n) {f=0;break;}}

        }
        if (f==0){cout<<"-1"<<"\n";continue;}
        for(int i=0;i<n;i++){if (done[i]==0){arr[i]='1';}
        }
        for(int i=0;i<n;i++){if (s[i]=='1'){if ((i-x>=0 &&arr[i-x]=='0') &&(i+x<n &&arr[i+x]=='0')){f=0;break;}}

        }
        if (f==0)cout<<"-1"<<'\n';
        else{for(int i=0;i<n;i++)cout<<arr[i];cout<<'\n';}
        solve();

    }
}
