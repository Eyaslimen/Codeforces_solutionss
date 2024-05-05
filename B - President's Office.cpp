
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
int main()  {
        ios_base::sync_with_stdio(0); cin.tie(0);
       int n,m;
       char C;
       set<char> s;
       cin>>n>>m; cin>>C;
       char t[n][m];
       fr(i,n) {
       fr(j,m) {
       char c;
       cin>>c;
       t[i][j]=c; }}
       fr(i,n) {
       fr(j,m) {
       if (t[i][j] == C) {
                if (i - 1 >= 0 && t[i - 1][j] != C && t[i - 1][j] != '.') {
                    s.insert(t[i - 1][j]);
                }
                if (i + 1 < n && t[i + 1][j] != C && t[i + 1][j] != '.') {
                    s.insert(t[i + 1][j]);
                }
                if (j - 1 >= 0 && t[i][j - 1] != C && t[i][j - 1] != '.') {
                    s.insert(t[i][j - 1]);
                }
                if (j + 1 < m && t[i][j + 1] != C && t[i][j + 1] != '.') {
                    s.insert(t[i][j + 1]);
                }
            }
    }}
    cout<<s.size();
    return 0;}





