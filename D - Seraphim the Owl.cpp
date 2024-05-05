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
const int N = 3e5 + 30, mod = 1e9 + 7, INF = 1e18 + 10;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) {
   ll n,m;
   cin>>n>>m;
   vl a(n);
   vl b(n);
   fr(j,n) {
   cin>>a[j];}
   fr(i,n) {
   cin>>b[i];
   }
   ll som=0;
   for(int j=n-1;j>=m;j--) {
    som+=min(a[j],b[j]);
   }
   ll mi=1e18,r=0;
   for(int k=m-1;k>=0;k--) {
        mi=min(mi,r+a[k]+som);
        r+=min(b[k],a[k]);
   }
   cout(mi);}
   return 0;}

