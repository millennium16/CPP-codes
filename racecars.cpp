#define ll long long int
#define forf(i,a,b) for(ll i=a;i<b;i++)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll d[n],v[n];
    vector<double>vx,vy;
    forf(i,0,n)
    {
        cin>>d[i]>>v[i];
        vx.push_back(d[i]/(v[i]+x));
        vy.push_back(d[i]/(v[i]-y));
    }
    sort(vx.begin(),vx.end());
    sort(vy.begin(),vy.end());
    vector<double>::iterator low1,low2;
    ll l1,l2;
    forf(i,0,n)
    {
        low1=lower_bound(vx.begin(),vx.end(),d[i]/(v[i]+x));
        l1=low1-vx.begin();
        cout<<i<<" l1:"<<l1<<endl;
        low2=lower_bound(vy.begin(),vy.end(),d[i]/v[i]);
        l2=low2-vy.begin();
        cout<<i<<" l2:"<<l2<<endl;
        if(i>l2)
            l2++;
        cout<<i<<" l2new:"<<l2<<endl;
        cout<<i<<" ans:"<<min(l1,l2)+1<<endl;
    }
    return 0;
}
