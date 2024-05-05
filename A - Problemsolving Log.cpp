#include <iostream>
#include <string>
#include <cctype>
#include <map>

using namespace std;
int main()  {
   int n;
   cin>>n;
   map<char, int> mp;
   string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   for(int i=0;i<s.length();i++) {
    mp[s[i]]=i+1;
   }

   while(n--) {
        int som=0;
    map<char, int> m;
   int t;
    cin>>t;
    while(t--) {
        char c;
        cin>>c;
        m[c]++;
    }
   for (const auto& pair : m) {
        char key = pair.first;
        if(m[key]>=mp[key]) {
            som++;
        } }
        cout<<som<<endl;


   }
   return 0;

}
