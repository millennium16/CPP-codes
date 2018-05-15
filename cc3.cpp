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
        ll n;
        cin>>n;
        vector<ll>a;
        int x;
        forf(i,0,n)
        {
            cin>>x;
            a.push_back(x);
        }
        ll c=0;
        sort(a.begin(),a.end());
        forf(i,0,n-1)
        {
            if((a[i]^a[i+1])==0)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
