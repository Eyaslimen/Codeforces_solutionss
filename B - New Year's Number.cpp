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
ll t; cin>>t;
while(t--) {
    ll n;
    cin>>n;
    bool test=false;
    if(n%2020==0) {
        test=true;
    }
    else {
            ll k=n%2020;
            ll j=n-k*2021;
            if(j==0||(j>0&&j%2020==0)) {
                test=true;
            }
}
if(test==true) {
    cout("YES");
} else {
cout("NO");
} }
 return 0;}




