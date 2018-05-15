#define ll long long int
#define forf(i,a,b) for(ll i=a;i<b;i++)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,h;
        cin>>n>>h;
        vector<ll>a;
        ll x;
        forf(i,0,n)
        {
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        ll m=a[n-1];

    }
}
