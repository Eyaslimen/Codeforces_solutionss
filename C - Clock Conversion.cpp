#include "bits/stdc++.h"
using namespace std;


int main() {
 ios_base::sync_with_stdio(0); cin.tie(0);
long long t; cin>>t;
while(t--) {
        vector<int> v;
        string ss;
        cin>>ss;
        string s="";
        string mnn="";
        for(int i=0;i<5;i++) {
            char c=ss[i];

            if(i>2) {
                mnn+=c;
            }
            s+=c;
           if(i!=2&&i<2) v.push_back(c-'0');
        }
        string res;
        int n1=v[0]*10+v[1];
        if(n1>0&&n1<13) {
            res=s;
        }
        else if(n1==0) {
                res+="12";
                res+=':';
                res+=mnn;
            }
        else {
            int n2=n1-12;
            if(n2<10) {
                res+='0';
            }
            string h =to_string(n2);
            res+=h;
            res+=':';
            res+=mnn;
        }
        if(n1>=12) {
            cout<<res<<'\t'<<"PM"<<'\n';
        }
        else {
            cout<<res<<'\t'<<"AM"<<'\n';
        }
        }



return 0;
}





