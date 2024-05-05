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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
ll t;
cin>>t;
while(t--) {
    ll n,m,k,c;
    cin>>n>>m>>k>>c;
    vl v;
    v.push_back(0);
    fr(i,n) {
    ll a;
    cin>>a;
    v.push_back(a);}
    ll s=0;
    bool test=true;
    for(int i=1;i<n+1;i++) {
        ll t=(v[i]-v[i-1]);
        s+=min(c,t*k);
        if(s>=m) {
            test=false; break;
        }
    }
       if(test==true) { cout("YES");
    }
    else {
        cout("NO");
    } }
    return 0;
}




