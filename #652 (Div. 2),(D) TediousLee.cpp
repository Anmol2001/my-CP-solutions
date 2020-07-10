#include <bits/stdc++.h>
using namespace std;
pair<long long,long long>dpl[2000005];
#define s second
#define f first
#define mod 1000000007
int main(){
    dpl[1]={0,0};dpl[2]={0,0};
dpl[3]={4,0};dpl[4]={4,4};dpl[5]={8,12};
int n,t;
for(int i=6;i<2000001;i++){dpl[i].f=((dpl[i-1].s)%mod +((dpl[i-2].s)%mod)+((dpl[i-2].s)%mod)+4)%mod;
dpl[i].s=((max(dpl[i-1].f,dpl[i-1].s))%mod +(max(dpl[i-2].f,dpl[i-2].s))%mod +(max(dpl[i-2].f,dpl[i-2].s)%mod))%mod;

}
cin>>t;
while(t--){
 cin>>n;
 cout<<(((dpl[n].f)>(dpl[n].s))?dpl[n].f:dpl[n].s)%mod<<endl;
}
return 0;
}
