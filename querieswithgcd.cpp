#define ll long long
#define forf(i,a,b) for(ll i=a;i<b;i++)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ll n,q;
    cin>>n>>q;
    ll a[n];
    forf(i,0,n)
    cin>>a[i];
    ll gcdval[n][n];
    memset(gcdval,-1,sizeof(gcdval));
    forf(i,0,n)
    {
        forf(j,0,n)
        {
            if(i!=j)
            {
                gcdval[i][j]=__gcd(a[i],a[j]);
                if(j>i)
                gcdval[i][j]=max(gcdval[i][j-1],gcdval[i][j]);
            }
        }
    }
    for(ll j=n-1;j>=0;j--)
    {
        for(ll i=j-1;i>=0;i--)
        {
            gcdval[i][j]=max(gcdval[i][j],gcdval[i+1][j]);
        }
    }
    /*forf(i,0,n)
    {
        forf(j,0,n)
        {
            cout<<gcdval[i][j]<<" ";
        }
        cout<<endl;
    }*/
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        l--;r--;
        cout<<gcdval[l][r]<<endl;
    }
    return 0;
}
