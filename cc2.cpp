#define ll long long
#define forf(i,a,b) for(ll i=a;i<b;i++)
#define forr(i,a,b) for(ll i=b;i>a;i--)

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
        double sum=0.0;
        while(n--)
        {
            double p,q,d;
            cin>>p>>q>>d;
            double m=p+((p*0.01)*d);
            double n=m-((m*0.01)*d);
            double l=p-n;
            sum=sum+(l*q);
        }
        cout<<setiosflags(ios::showpoint)<<setprecision(12)<<sum<<endl;
    }
    return 0;
}
