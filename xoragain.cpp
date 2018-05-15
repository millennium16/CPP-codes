#define ll long long int
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]=a[i]*2;
            sum=sum^a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
