
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
#define cout(r) cout<<r<<endl;
#define sortt(v) sort(v.begin(),v.end());
#define sortr(v) sort(v.begin(),v.end(),greater<int>());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define each(x, a) for (auto &x : a)

using namespace std;







int main() {
 ios_base::sync_with_stdio(0); cin.tie(0);
 ll t;
 cin>>t;
 while(t--) {
    ll n;
    cin>>n;
    vl v;
    string s="abcdefghijklmnopqrstuvwxyz";
    map<char,int> m;
    fr(j,s.size()) {
        m[s[j]]=0;
    }
    string ss="";
    fr(i,n) {
        int k;
        cin>>k;
        char c;
    map<char, int>::iterator it = m.begin();
    while (it != m.end()) {

    if(it->second==k) {
                c=it->first;
         m[c]++ ;
                break;
            }
        ++it;
    }
        ss+=c;
    }
    cout(ss);



 }

    return 0;}







