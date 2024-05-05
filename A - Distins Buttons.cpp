#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()  {
int t;
cin>>t;
while(t--) {
        int n;
cin>>n;
int som=0;
bool test1=false;
bool test2=false;
bool test3=false;
bool test4=false;

while(n--) {
    int a,b;
    cin>>a>>b;
    if(a>0&&test1==false) {som++; test1=true;}
   else if(a<0&&test2==false) {som++; test2=true;}
    if(b>0&&test3==false) {som++; test3=true;}
    else if(b<0&&test4==false) {som++; test4=true;} }
    if(som<4) cout<<"YES"<<endl;
    else { cout<<"NO"<<endl;}
}
return 0; }
