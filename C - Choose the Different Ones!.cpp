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
    ll n,m,k;
    cin>>n>>m>>k;
    vl v(n);
    vl u(m);
    in(v,n); in(u,m);
    vl res(k+1,0);
    fr(i,n) {
    if(v[i]<=k) {
       res[v[i]]=1;
    }
    }
    fr(j,m) {
    if(u[j]<=k) {
        if(res[u[j]]==1) {
            res[u[j]]+=2;
        }
        else {
        if(res[u[j]]==0)   res[u[j]]=2;
        } }
    }
    ll p1=0; ll p2=0; bool test=true;
    for(int h=1;h<=k;h++) {
        if(res[h]==0) {
            test=false; break;
        }
            if(res[h]==1||res[h]==3) {
            p1++;
        }
        if(res[h]==2||res[h]==3) {
        p2++;
        }
    }
    if(p1>=k/2&&p2>=k/2&&test==true) {
        cout("YES");
    }
    else {
        cout("NO");
    } }

    return 0;
}



