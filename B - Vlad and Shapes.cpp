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
int t;
cin>>t;
while(t--) {
    int n;
    cin>>n;
    vector<int> u;
    vector<string> v(n);
    fr(i,n) {
    string a;
    cin>>a;
    v[i]=a;}
    for(string ss : v) { int k=0;
        fr(j,n) {
        if(ss[j]=='1') {
            k++;
        }
        }
        if(k!=0) {u.push_back(k);}
    }
    bool test=true;
    fr(h,u.size()-1) {
    if(u[h]!=u[h+1]) {
        test=false ; break;
    }}
    if(test==true) {
        cout<<"SQUARE"<<'\n';
    } else {
    cout<<"TRIANGLE"<<'\n';} }

return 0; }








