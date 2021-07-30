#include <bits/stdc++.h>
using namespace std;
typedef long long int  ll;
#define MAX3(x,y,z) max(x,max(y,z))


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        ll ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        for(int i=0;i<n-1;i++)
        {
            ans=max(ar[i]*ar[i+1], ans);
        }
        cout<<ans<<endl;
    }
}