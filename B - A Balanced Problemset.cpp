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
 ll x,n;
 cin>>x>>n;
 vl v;
 for(int i=1;i<=sqrt(x);i++) {
    if(x%i==0) {
        v.push_back(i);
        v.push_back(x/i);
    }
 }
 sortr(v);
 ll sol=0;
 for(int i=0;i<v.size();i++) {
    if(v[i]*n<=x) {
        sol=v[i];
        break;
    }
 }



cout(sol);
 }
return 0;
}