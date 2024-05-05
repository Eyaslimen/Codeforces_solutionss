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
while(n--) {
    string s;
    cin>>s;
    ll k=s.size()-1;
    ll som1=0;
   for(int i=k;i>0;i--) {
    if(s[i]=='0') {
            ll pos=0;
        for(int j=i-1;j>0;j--) {
            if(s[j]=='5'||s[j]=='0') {
                pos=j;
                break;
            }
        }
        ll y=som1;
        som1+=k-y-pos-1;
        break; }
    else {
        som1++;
    } }

    ll som2=0;
    for(int i=k;i>0;i--) {
    if(s[i]=='5') {
        ll pos=0;
        for(int j=i-1;j>=0;j--) {
            if(s[j]=='2'||s[j]=='7') {
                pos=j;
                break;
            }
        }
        ll y=som2;
        som2+=k-y-pos-1;
        break;
    }
    else {
        som2++;
    } }

ll mm=min(som1,som2);
cout(mm); }
return 0; }



