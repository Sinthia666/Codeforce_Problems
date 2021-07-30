#include <bits/stdc++.h>
using namespace std;
typedef long long int  ll;
// typedef vector<lli> vlli;
#define MAX3(x,y,z) max(x,max(y,z))
// typedef vector<int> vi
// typedef vector<lli> vlli;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        ll ar[n+3];
        for(int i=0;i<n;i++)cin>>ar[i];
        for(int i=0;i<n-1;i++)
        {
            ans=max(ans,ar[i]*ar[i+1]);
        }
        cout<<ans<<endl;
    }
}