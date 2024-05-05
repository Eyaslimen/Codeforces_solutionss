

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
        int t;
        cin>>t;
        while(t--) {
            int n;
            cin>>n;
            string s,ss,sss;
            cin>>s>>ss>>sss;
            bool test=false;
            fr(i,n) {
            if(sss[i]!=s[i]&&sss[i]!=ss[i]) {
               test=true;
               break;
               }}
               if(test==true) {
                cout("YES");
               } else cout("NO");

        }

    return 0;
}

