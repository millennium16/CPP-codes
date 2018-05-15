#define ll long long
#define forf(i,a,b) for(ll i=a;i<b;i++)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll f[n][n];
    memset(f,0,sizeof f);
    ll m,p,a,b,c,d;
    cin>>m;
    while(m--)
    {
        cin>>p>>a>>b>>c>>d;
        a--;b--;c--;d--;
        for(ll i=a;i<=c;i++)
        {
            for(ll j=b;j<=d;j++)
            {
                f[i][j]=f[i][j]^p;
            }
        }
    }
    forf(i,0,n)
    {
        forf(j,0,n)
        {
            cout<<f[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
