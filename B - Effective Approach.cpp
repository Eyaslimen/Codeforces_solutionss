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
#define fr(i, b) for (long long i=0; i<b; i++)
#define cout(r) cout<<r<<endl;
#define sortt(v) sort(v.begin(),v.end());
#define sortr(v) sort(v.begin(),v.end(),greater<int>());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define each(x, a) for (auto &x : a)


using namespace std;
int main()  {
        ios_base::sync_with_stdio(0); cin.tie(0);
        ll n,m;
        cin>>n;
        map<ll,ll> mp;
        fr(i,n) {
            ll k;
            cin>>k;
            mp[k]=i+1;
        }
        cin>>m;
        ll s1=0,s2=0;
        fr(i,m) {
        ll b;
        cin>>b;
        s1+=mp[b];
        s2+=n-mp[b]+1;
        }
    cout<<s1<<' '<<s2;

    return 0;
}



