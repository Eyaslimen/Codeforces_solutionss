
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
using namespace std;
int check(string str, int ind)
{
    int len = str.size();
    for(int i=ind;(i+3)<len;i++)
    {
        if(str[i] == 'b' && str[i+1] == 'e' && str[i+2] == 'a' && str[i+3] == 'r')
        {
            return i+3;
        }
    }
    return -1;
}
int main()
{
 string s;
    cin>>s;
    ll c = 0;
        int n=s.size();
    for(int i=0;i<n;i++)
    {
        int ind = check(s,i);
        if(ind != -1)
        {
            c+=(n - ind);}
    }
    cout(c);
    return 0;
}

