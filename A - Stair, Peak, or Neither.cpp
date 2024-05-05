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


int main() {
 ios_base::sync_with_stdio(0); cin.tie(0);
ll t; cin>>t;
while(t--) {
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b&&b<c) {
        cout<<"STAIR"<<endl;
    }
    else if(a<b&&b>c) {
        cout<<"PEAK"<<endl;
    }
    else {
        cout<<"NONE"<<endl;
    }

}
return 0;
}




