

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef vector<int> vi;
typedef vector<ld> vd;

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
    ll s=0;
    bool test=false;
    fr(i,n) {
    int a;
    cin>>a;
   if(a%3==1) {
    test=true;
   }
   s+=a;
}
if(s%3==0) {cout(0);}
else if(s%3==2) {
    cout(1);
}
else if(s%3==1&&test==true) {
    cout(1);
}
else {
    cout(2);
}
}

return 0; }




