#include <iostream>
#include <map>
#include <vector>
#include <algorithm>


using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int e=0;
    for(int j : v) {
        if(e-j<0) {
            e+=abs(e-j);
        }
    }
    cout<<e;
    return 0;}
