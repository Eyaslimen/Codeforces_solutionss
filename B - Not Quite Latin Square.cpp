#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()  {
int t;
cin>>t;
while(t--) {
        char tab[3][3];
int k=3;
int j=3;
int som=0;
for(int k=0;k<3;k++) {
    for(int j=0;j<3;j++) {
     cin>>tab[k][j];
        char c=tab[k][j];
        if(c=='A') som+=10;
        if(c=='B') som+=20;
        if(c=='C') som+=30; }  }

if(180-som==30) {cout<<'C'<<endl;}
else if(180-som==20) {cout<<'B'<<endl;}
else if(180-som==10) {cout<<'A'<<endl;}
}
return 0; }

