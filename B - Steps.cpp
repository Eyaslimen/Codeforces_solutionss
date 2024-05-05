#include "bits/stdc++.h"
using namespace std;
int main()  {
        ios_base::sync_with_stdio(0); cin.tie(0);
        long long n,m,x,y,k;
        cin>>n>>m>>x>>y>>k;
        long long step=0;
        while(k--) {
        long long a,b,s1=0,s2=0;
        cin>>a>>b;
        if(a>0) {      long long j=n-x;       if(j>0)  s1=j/a; }
        else if(a<0) { long long j=x-1;  if(j>0)  s1=j/abs(a); }
        if(b>0) {      long long j=m-y;       if(j>0)  s2=j/b; }
        else if(b<0) { long long j=y-1;  if(j>0)  s2=j/abs(b); }
        if(s1>0||s2>0) {
        long long h;
        if(s1==0&&s2!=0) h=s2;
        else if(s1!=0&&s2==0) h=s1;
        else h=min(s1,s2);
        if((x+a*h)>=1&&(x+a*h)<=n&&(y+b*h)>=1&&(y+b*h)<=m)  {
        step+=h;
        x=x+a*h;
        y=y+b*h;
        }
        } }
        cout<<step;
        return 0;
}

