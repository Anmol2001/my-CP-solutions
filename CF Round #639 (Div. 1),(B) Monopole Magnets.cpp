#include <bits/stdc++.h>
#define s second
#define f first
#include<string>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    pair<int,int>rs[n+1];
    pair<int,int>cs[m+1];
    for(int i=1;i<n+1;i++){
            string s;
            cin>>s;
        for(int j=1;j<m+1;j++){
            if (s[j-1]=='#'){if (rs[i].f==0){rs[i].f=j;rs[i].s=j;}else if(rs[i].s<j-1){cout<<-1;return 0;}else rs[i].s+=1;
                           if (cs[j].f==0){cs[j].f=i;cs[j].s=i;}else if (cs[j].s<i-1){cout<<-1;return 0;}else cs[j].s+=1;
            }
        }
    }
    int cnt=0;
    int cmt=0;
    for (int u=1;u<=m;u++){if (cs[u].f==0)cmt+=1;}
    int g=0;
    if (rs[1].f!=0)g=1;else {cnt+=1;}
    for(int k=2;k<n+1;k++){if (rs[k].f==0){cnt+=1;}
        if (rs[k].f<=rs[k-1].s && rs[k].s>=rs[k-1].f)  continue;
                            else if (rs[k].f!=0) {g+=1;}}
    if (cnt==n){cout<<0;return 0;}
    if ((cnt!=0 &&cmt==0)||(cmt!=0&&cnt==0)){cout<<-1;return 0;}
    cout<<g;
return 0;
}

