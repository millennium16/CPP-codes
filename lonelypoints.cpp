#define ll long long int
#define forf(i,a,b) for(ll i=a;i<b;i++)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    forf(i,0,n)
        cin>>a[i];
    vector<ll>v;
    forf(i,1,n)
    {
        v.push_back(a[i]-a[i-1]);
    }
    sort(v.begin(),v.end());
    /*forf(i,0,v.size())
    cout<<v[i]<<" ";
    cout<<endl;*/
    if(n==3)
    {
        cout<<v[n-3];
        return 0;
    }
    v.erase(v.begin()+(n-2));
    /*forf(i,0,v.size())
    cout<<v[i]<<" ";
    cout<<endl;*/
    cout<<v[v.size()-2];
    return 0;
}
