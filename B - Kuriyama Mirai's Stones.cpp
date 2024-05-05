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

ll prend(ll i, vl v, ll j, vl u, ll k, vl w, ll h) {
    if(i==0) {
        return 0;
    }
        ll n=v.size();
    if(j>=n&&k>=n&&h>=n) {
        return 0;
    }
    ll s=0;
    if(j<n) { s = max(s,v[j] + prend(i-1, v, n, u, k+1, w, h+1)); }
    if(k<n) { s = max(s, u[k] + prend(i-1, v, j+1, u, n, w, h+1)); }
    if(h<n) {s = max(s, w[h] + prend(i-1, v, j+1, u, k+1, w, n)); }
    s = max(s, prend(i, v, j+1, u, k+1, w, h+1));
    return s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vl v(n);
    fr(i,n) {
    cin>>v[i];}
    vl u=v;
    sortt(u);
    vl vs(n+1);
    vs[0]=0;
    for(int j=1;j<=n;j++) {
        vs[j]=vs[j-1]+v[j-1];
    }
    vl us(n+1);
    us[0]=0;
    for(int j=1;j<=n;j++) {
        us[j]=us[j-1]+u[j-1];
    }
    ll t;
    cin >> t;
    while(t--) {
        int a;
        ll b,c;
        cin>>a;
        cin>>b>>c;
    if(a==1) {
        ll s=vs[c]-vs[b-1];
        cout(s);
    }
    if(a==2) {
        ll s=us[c]-us[b-1];
        cout(s);

    }
    }
    return 0;
}

