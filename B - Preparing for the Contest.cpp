#include <iostream>
#include <string>
#include <cctype>
#include <map>

using namespace std;
int main()  {
int n;
cin>>n;
while(n--) {
    int t,k;
    cin>>t>>k;
   for(int i=t-k;i<t+1;i++) {
        cout<<i<<" ";
    }
    int j=t-k-1;
    while(j>0) {
        cout<<j<<" ";
        j--;
    }
    cout<<endl;
}
return 0;
}

