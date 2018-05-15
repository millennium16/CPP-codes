#define ll long long
#define forf(i,a,b) for(ll i=a;i<b;i++)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll sum=0;
        forf(i,0,n)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        ll c=0;
        forf(i,0,n)
        {
            if(a[i]+k>sum-a[i])
                c++;
        }

        cout<<c<<endl;
    }
    return 0;
}
