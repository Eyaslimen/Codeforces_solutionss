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

ll c(string s, string t) {
    ll k=0;
    ll n=t.size();
    ll i=0;
while(i<=s.size()-n) {
        bool test=true;
    for(int k=i;k<i+n;k++) {
        if(s[k]!=t[k-i]) {
            test=false;
            break;
        }
    }
   if(test==true) {
    k++;
    i+=n;
   }
   else {
    i++;
   }
}
return k;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
ll t;
cin>>t;
while(t--) {
ll n;
string s;
cin>>n;
cin>>s;
if(s.size()<3) {
    cout(0);
}
else {
ll k =c(s,"map")+c(s,"pie")-c(s,"mapie");
cout(k);
} }
    return 0;
}


