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

string s,ss;

int main() {
    ios_base::sync_with_stdio(0);
int t;
    cin >> t;
    while(t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        while(k--) {
            int l, r; cin >> l >> r;
            bool test1 = false; bool test2=false;
            for(int i = 0; i < l-1 ; i++)
                if(s[i] == s[l-1]) test1 = true;
            for(int i = r; i < n; i++)
                if(s[i] == s[r-1]) test2 = true;
            if(test1||test2) {
                cout("YES");
            }
            else {
                cout("NO");
            }
    } }
    return 0; }

