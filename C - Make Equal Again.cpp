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
#define cout(r) cout<<r<<"\n";
#define sortt(v) sort(v.begin(),v.end());
#define sortr(v) sort(v.begin(),v.end(),greater<int>());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define each(x, a) for (auto &x : a)
using namespace std;
int main() {
 ios_base::sync_with_stdio(0); cin.tie(0);
 ll n;
 cin>>n;
 while(n--) {
bool test=true;
 ll k;
 cin>>k;
 long long v[k];
 fr(i,k) {
     ll a;
     cin>>a;
     v[i]=a;
 }

 ll s1=0,s2=0;
 ll j=0;
 ll h=k-1;
 ll k1=v[0];
 ll k2=v[k-1];
 bool test1=true;
 bool test2=true;
while(j<k&&h>=0&&(test1==true||test2==true)) {

if(v[j]!=k1) {test1=false;}
if(v[j]==k1&&test1==true) {
    s1++;
    j++;
}
if(v[h]!=k2) { test2=false; }
if(v[h]==k2&&test2==true) {
    s2++;
    h--;
}
}
if(k1==k2&&s1==s2&&s1==k) {cout(0);}
else if(k1==k2&&s1!=k) {
    cout(k-s1-s2);
}
else if(k1!=k2) {
    cout(k-max(s1,s2));
}
 }
return 0; }




