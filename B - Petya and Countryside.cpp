#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int max=0;
    for(int i=0;i<n;i++)
    {
        int x=1;
        for(int j=i-1;j>=0;j--)
            if(a[j]<=a[j+1])
                x++;
            else
                break;
        for(int j=i+1;j<n;j++)
            if(a[j]<=a[j-1])
                x++;
            else
                break;
        if(x>max)max=x;

    }
    cout<<max;
    return 0;
}
