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
ll n;
cin>>n;
vl v(n);
fr(i,n) {
    cin>>v[i];
}

ll s=0;
int p=1;
bool test=false;
fr(j,n) {
    if(v[j]==0) {
        s+=1;
        test=true;
    }
    else {
       if(v[j]<0) {
         s+=abs(v[j])-1;
         p*=-1;
       }
       else {
         s+=v[j]-1;
       }
    }
}
if(p==-1&&test==false) {
    cout(s+2);
} else {
cout(s); }
return 0; }
