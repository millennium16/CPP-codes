#define ll long long
#define forf(i,a,b) for(ll i=a;i<b;i++)
#define M 100001
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ll n;
    ll c[n],t[n];
    forf(i,0,n)
        cin>>c[i];
    ll mint1=M,mint2=M,mint3=M;
    forf(i,0,n)
    {
        cin>>t[i];
    }
    forf(i,0,n)
    {
        if(t[i]==1)
        {
            if(mint1>c[i])
            mint1=c[i];
        }
        else if(t[i]==2)
        {
            if(mint2>c[i])
            mint2=c[i];
        }
        else
        {
            if(mint3>c[i])
            mint3=c[i];
        }
    }
    cout<<min(mint3,(mint2+mint1));
    return 0;
}
