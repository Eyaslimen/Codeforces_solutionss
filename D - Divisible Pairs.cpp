#include<bits/stdc++.h>
using namespace std;

int main() {
 ios_base::sync_with_stdio(0);
 cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, x, y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        map<pair<int,int>,int> mp;
        int ans=0;
        for(int i=0;i<n;i++){
            int v1=(x-a[i]%x)%x;
            int v2=(y+a[i]%y)%y;
            if(mp.count({v1, v2}) > 0){
                ans += mp[{v1, v2}];
            }
            mp[{a[i]%x, a[i]%y}]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}

