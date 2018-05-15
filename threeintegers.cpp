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
        ll a,b,c;
        cin>>a>>b>>c;
        ll k=a+c-2*b;
        cout<<(abs(k)/2)+(abs(k)%2)<<endl;
    }
    return 0;
}
