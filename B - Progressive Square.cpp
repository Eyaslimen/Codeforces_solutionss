#include <bits/stdc++.h>
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
#define cout(r) cout<<r<<'\n'
#define sortt(v) sort(v.begin(),v.end())
#define sortr(v) sort(v.begin(),v.end(),greater<int>())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll M=1e9+1;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
ll t;
cin>>t;
while(t--) {
ll n,a,b;
cin>>n>>a>>b;
vl v(n*n);
ll m=M;
fr(i,n*n) {
cin>>v[i];
if(v[i]<m) {
    m=v[i];
} }
ll c=m;
vl u;
vl base;
base.push_back(c);
u.push_back(c);
fr(i,n-1) {
    c+=b;
base.push_back(c);
u.push_back(c);
}
fr(j,n) {
    fr(h,n-1) {
    base[j]+=a;
    u.push_back(base[j]);
}
}

sortt(u);
sortt(v);
if(u==v) {
    cout("YES");
}
else {
    cout("NO");
}
}
    return 0;
}


