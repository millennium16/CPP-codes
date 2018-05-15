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
        ll n,k;
        cin>>n>>k;
        vector<ll>t1;
        vector<ll>m1;
        forf(i,0,n)
        {
            ll x;
            cin>>x;
            if(i%2==0)
            {
                m1.push_back(x);
            }
            t1.push_back(x);
        }
        sort(t1.begin(),t1.end());
        sort(m1.begin(),m1.end());
        vector<ll>::iterator p1,p2;
        ll t=0,m=m1.size()-1;
        forf(i,0,k)
        {
            if(t1[t]<m1[m])
            {
                ll temp=m1[m];
                m1[m]=t1[t];
                t1[t]=temp;
                t++;
                m--;
            }
            else
            {
                t++;
                continue;
            }
        }
        ll sum1=0,sum2=0;
        forf(i,0,t1.size())
        {
            sum1+=t1[i];
        }
        forf(i,0,m1.size())
        {
            sum2+=m1[i];
        }
        if(sum1>sum2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
