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
ll t,n;
cin>>t>>n;
vl v(t);
in(v,t);
vl u(t),w(t);
u[0]=0;
w[t-1]=0;
for(int k=0;k<t-1;k++) {
        u[k+1]=u[k];
       if(v[k]-v[k+1]>0) {
        u[k+1]+=v[k]-v[k+1];
       }
}
int h=1;
for(int k=t-1;k>=0;k--) {
    w[k]=w[k+1];
if(v[k+1]-v[k]>0) {
    w[k]+=v[k+1]-v[k];
}
  h++;}
while(n--) {
    ll i,j;
    cin>>i>>j;
    if(i<=j) {
        cout(u[j-1]-u[i-1]);
    }
    else {

         cout(w[j-1]-w[i-1]);
    }
}

    return 0;
}


