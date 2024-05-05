#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()  {
    ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
int t;
cin>>t;
while(t--) {
int n,k;
cin>>n>>k;
bool test=true;
int prod=1;
for(int i=0;i<n;i++) {
    int a;
    cin>>a;
    prod*=a;
    if(2023%a!=0) { test=false;} }
if(test==false) cout<<"NO"<<endl;
else {
    if(2023%prod!=0) {cout<<"NO"<<endl; }
    else {
        cout<<"YES"<<endl;
    cout<<2023/prod<<" ";
    int ti=k-1;
    while(ti--) {
        cout<<1<<" ";
    }
    cout<<endl;
}

} }
