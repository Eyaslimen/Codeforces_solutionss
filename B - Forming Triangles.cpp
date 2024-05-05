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
    ll n;
    cin>>n;
    vl v(n);
    map<ll,ll> mp;
    fr(i,n) {
    cin>>v[i];
    mp[v[i]]++;
    }
    ll som=0;
    ll res=0;
    for (const auto& x :mp) {
        ll c=x.second;
        if(c>=3) {
            res+=((c*(c-1)*(c-2))/6);
        }
        if(c>=2) {
            res+=som*(c*(c-1)/2);
        }
      som+=c;
    }
    cout(res);
}
return 0;
}




