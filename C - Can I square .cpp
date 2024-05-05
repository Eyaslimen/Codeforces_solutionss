#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;
int main()  {
int t;
cin>>t;
while(t--) {
        long long n;
cin>>n;
long long som=0;
while(n--) {
    int a;
    cin>>a;
    som+=a;
}
auto rc=sqrt(som);
int rcc = static_cast<int>(rc);
if (rcc==rc) {
        cout<<"YES"<<endl; }
else {cout<<"NO"<<endl;}
}
return 0; }

