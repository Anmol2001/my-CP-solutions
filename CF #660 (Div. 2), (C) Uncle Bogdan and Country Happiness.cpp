#include <bits/stdc++.h>
#define pb push_back
#define f first
#define s second
using namespace std;
bool f;
int n,m;
vector<int>hi;vector<int>pi;
pair<int,int> DFS(int parent,int pp,const int n1,vector<int> ad[]){
    int mh=0;
    int c=0;
    for(auto& i : ad[parent-1]){if (i!=pp){pair<int,int>pii=DFS(i,parent,n1,ad);mh+=pii.f;c+=pii.s;}}
    if ((pi[parent-1]+c<hi[parent-1]) ||(-pi[parent-1]-c>hi[parent-1])||((pi[parent-1]+c-hi[parent-1])%2==1))f=0;
    int s=(c+pi[parent-1]-hi[parent-1])/2;
    int mhr=(c+pi[parent-1]-s);
    if (c+pi[parent-1]-s<mh){f=0;}
    return make_pair(mhr,c+pi[parent-1]);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
   f=1;

     cin>>n>>m;
     vector<int> ad[n];
     pi.clear();
     hi.clear();
     int in;
     for(int i=0;i<n;i++){cin>>in;pi.pb(in); }
     for(int i=0;i<n;i++){cin>>in;hi.pb(in); }
     int a,b;
     for(int i=0;i<n-1;i++){cin>>a>>b; ad[a-1].pb(b);ad[b-1].pb(a);}
     DFS(1,0,n,ad);
     if (f==1)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
         }return 0;}
