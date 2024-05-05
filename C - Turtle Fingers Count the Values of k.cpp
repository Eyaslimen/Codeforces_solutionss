

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
#define fr(i, b) for (int i=0; i<=b; i++)
#define cout(r) cout<<r<<'\n';
#define sortt(v) sort(v.begin(),v.end());
#define sortr(v) sort(v.begin(),v.end(),greater<int>());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define each(x, a) for (auto &x : a)


int div(ll x,int y) {
int k=0;
int b=y;
while(x%b==0) {
    b=b*y;
    k++;
}
return k; }

int main() {
 ios_base::sync_with_stdio(0); cin.tie(0);
ll t;
cin>>t;
while(t--) {
    int a,b;
cin>>a>>b;
ll l; cin>>l;
int m1=div(l,a);
int m2=div(l,b);
int i=0;
ll g=l;
int som=0;
set<ll> s;
while(i<=m1) {
        ll power_a= pow(a, i);
    g=l/power_a;
    fr(j,m2) {
         ll power_b = pow(b, j);
        if(g%power_b==0)
        {
           s.insert(g/power_b);
        }
    }
    i++;
}
cout(s.size());

}

return 0; }
