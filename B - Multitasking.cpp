
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
	int n,m,k;
	cin>>n>>m>>k;
	cout<<m*(m-1)/2<<'\n';
	if (k==0)
	for (int i=1;i<=m;i++)
		for (int j=i+1;j<=m;j++)
			cout<<i<<' '<<j<<'\n';
	else
		for (int i=1;i<=m;i++)
		for (int j=i+1;j<=m;j++)
			cout<<j<<' '<<i<<'\n';
    return 0;
}





