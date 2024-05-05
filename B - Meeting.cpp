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
#define forn(i, a, b) for (int i=a; i<=b; ++i)
#define fornn(i, a, b) for (int i=a; i<b; ++i)
#define fr(i, b) for (int i=0; i<b; i++)
#define cout(r) cout<<r<<endl;
#define sortt(v) sort(v.begin(),v.end());
#define sortr(v) sort(v.begin(),v.end(),greater<int>());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define each(x, a) for (auto &x : a)

long n=0;
int ta[1001],tb[1001],tc[1001];
int test(int x,int y) {
fr(i,n)
if(((x-ta[i])*(x-ta[i])+(y-tb[i])*(y-tb[i]))<=tc[i]*tc[i]) return 0;
return 1;
}


using namespace std;
int main()  {
    ios_base::sync_with_stdio(0); cin.tie(0);
      int x,y,xx,yy;
      cin>>x>>y>>xx>>yy;
      if(x > xx) swap(x, xx);
      if(y > yy) swap(y, yy);
      cin>>n;
      fr(i,n) {
          int a,b,c;
          cin>>a>>b>>c;
          ta[i]=a;
          tb[i]=b;
          tc[i]=c;
      }
      int s=0;
      forn(i,x,xx) { s+=test(i,y)+test(i,yy);}
      fornn(j,y+1,yy) { s+=test(x,j)+test(xx,j);}
      cout(s);
      return 0;
}












