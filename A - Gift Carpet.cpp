#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()  {
int n;
cin>>n;
for(int i=0;i<n;i++){
    int a;
    int b;
    cin>>a>>b;
    string s="vika";
    char  tab[a][b];
    for(int k=0;k<a;k++) {
        for(int j=0;j<b;j++) {
            char c;
            cin>>c;
            tab[k][j]=c;
        }
    }
    int l=0;
    for(int h=0;h<b;h++) {
        for(int f=0;f<a;f++) {
            if(s[l]==tab[f][h])  {
              l++; break;
            }
        }
    if(l==4) {
    break;
    }
}
if(l==4) {
    cout<<"YES"<<"\n";
} else {
cout<<"NO"<<"\n";
} }
return 0; }

