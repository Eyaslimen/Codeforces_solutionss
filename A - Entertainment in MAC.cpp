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
int n;
cin>>n;
while(n--) {
    ll k;
    cin>>k;
    string s;
    cin>>s;
    ll j=s.size();
    string ss="";
    for(int i=j-1;i>=0;i--) {
            ss+=s[i];
        }
                if(s==ss) {
            cout(s);
        }
        else {
        bool test;
    for(int h=0;h<j;h++) {
            if(ss[h]!=s[h]&&ss[h]-'a'>s[h]-'a') {
                test=true; break;
            }
    if(ss[h]-'a'<s[h]-'a'&&ss[h]!=s[h]) {
        test=false;
        break;
    }
    }
    if(test==false) {
        cout(ss+s);
    }
    else {
        cout(s);
    } } }
return 0; }

