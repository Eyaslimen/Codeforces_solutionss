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

#define cout(r) cout<<r<<'\n';

bool verif_binaire(long long n) {
     string s = to_string(n);
     bool test=true;
     for(int i=0;i<s.size();i++) {
        if(s[i]!='0'&&s[i]!='1') {
            test=false; break;
        }
     }
     return test;
}
int main() {
 ios_base::sync_with_stdio(0); cin.tie(0);
long long t; cin>>t;
while(t--) {
       long long n;
       cin>>n;
       if(verif_binaire(n)==true) {
        cout("YES");
       }
       else {
            if(n%11!=0&&n%10!=0&&n%101!=0&&n%111!=0) {
                cout("NO");
            }
            else {
            vector<int> v(4);
            v= {111,101,11,10};
            for(int i=0;i<4;i++) {
            while(n%v[i]==0) {
                n/=v[i];
            } }
            bool test1=verif_binaire(n);
            if(test1==true) {
                cout("YES");
            }
            else {
                cout("NO");
            }


            }

            }

       }
return 0;}

