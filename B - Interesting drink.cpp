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
int n; cin>>n;
vi v(n);
fr(i,n) {
cin>>v[i];}
sortt(v);
int m=v[n-1];
vi u(m+1);
for(int q=0;q<v[0];q++) {
    u[q]=0;
}
fr(j,n-1) {
    for(int x=v[j];x<v[j+1];x++) {
        u[x]=j+1;
    }
}
u[m]=n;
int q;
cin>>q;
vi w(q);
fr(j,q) {
cin>>w[j]; }
for(int a : w) {
if(a<=m) {
    cout(u[a])
}
else {
    cout(u[m]);
}
}
 return 0;
 }


