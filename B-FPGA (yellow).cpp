
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
        int n,k;
        cin>>n>>k;
        int good;
        fr(i,n) {
        string l;
        cin>>l;
        set<int> s;
        fr(j,l.length()) {
            char c=l[j];
            int m=c-'0';
            if(m<=k) {s.insert(m);}

        }
        if(s.size()==k+1) {good++;} }
        cout(good);

    return 0;
}

