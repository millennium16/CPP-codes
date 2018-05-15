#define ll long long int
#define forf(i,a,b) for(ll i=a;i<b;i++)

#include <bits/stdc++.h>
using namespace std;

ll count1=0;

int isPrime(ll m)
{
    if(m==1)
        return 1;
    for(ll i=3;i<=sqrt(m);i+=2)
    {
        if(m%i==0)
        {
            count1++;
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a;
        forf(i,0,n)
        {
            ll c;
            cin>>c;
            if((c==0)||(c>2 && c%2==0)||(c>3 && c%3==0))
            {
                count1++;
                continue;
            }
            if(isPrime(c))
                a.push_back(c);
        }
        if(a.size()==1 && a[0]!=1)
            cout<<-1;
        else
            cout<<count1<<endl;
    }
    return 0;
}
