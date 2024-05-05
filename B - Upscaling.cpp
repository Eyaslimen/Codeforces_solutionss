#include "bits/stdc++.h"
using namespace std;

string affiche(int n,string c,string cc) {
string s="";
int i=0;
while(i<2*n) {
    if(i%4==0) {
        s+=c;
        i+=2;
    }
    else {
        s+=cc;
        i+=2;
    }
}
return s;}

int main() {
 ios_base::sync_with_stdio(0); cin.tie(0);
long long t; cin>>t;
while(t--) {
int n;
cin>>n;
int j=0;
while(j<2*n) {
if(j%4==0) {
    string s=affiche(n,"##","..");
    cout<<s<<'\n';
    cout<<s<<'\n';
    j+=2;
}
else {
    string s=affiche(n,"..","##");
    cout<<s<<'\n';
    cout<<s<<'\n';
    j+=2;
}
}

}

return 0;
}




