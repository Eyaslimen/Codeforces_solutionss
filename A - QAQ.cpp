#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<string> vs;
#define in(v,n) for(int i=0; i<n; i++) cin>>v[i]
#define out(v,n) for(int i=0; i<n; i++) cout<<v[i]<<" "<<endl
#define forn(i, a, b) for (int i=a; i<b; i++)
#define fr(i, b) for (int i=0; i<b; i++)
#define cout(r) cout<<r<<'\n';
#define sortt(v) sort(v.begin(),v.end());
#define sortr(v) sort(v.begin(),v.end(),greater<int>());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define each(x, a) for (auto &x : a)




int main() {
 ios_base::sync_with_stdio(0); cin.tie(0);
string s;
cin>>s;
int n=s.size();
int som=0;
vi v(n);
if(s[0]!='Q') {
v[0]=0; }
else {
    v[0]=1;
}
for(int i=1;i<n;i++) {
    if(s[i]=='Q') {
     v[i]=v[i-1]+1; }
     else {
        v[i]=v[i-1];
     } }
     int sm=0;
fr(j,n) {
if(s[j]=='A') {
    int k1=v[j];
    int k2=v[n-1]-v[j];
    sm+=k1*k2;
}
}
 cout(sm);

 return 0;}






