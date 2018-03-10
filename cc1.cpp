#define ll long long
#define forf(i,a,b) for(ll i=a;i<b;i++)
#define forr(i,a,b) for(ll i=b;i>a;i--)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int ff=0;
    int fb=0;
    while(t--)
    {
        ll n;
        cin>>n;
        ll l[n],g[n];
        forf(i,0,n)
        cin>>l[i];
        forf(i,0,n)
        cin>>g[i];
        forf(i,0,n)
        {
            if(l[i]<=g[i])
            ff=1;
            else
            {
                ff=0;
                break;
            }
        }
        forf(i,0,n)
        {
            if(l[i]<=g[n-i-1])
            fb=1;
            else
            {
                fb=0;
                break;
            }
        }
        if(ff==1 && fb==1)
            cout<<"both"<<endl;
        else if(fb==1)
            cout<<"back"<<endl;
        else if(ff==1)
            cout<<"front"<<endl;
        else
            cout<<"none"<<endl;
    }
    return 0;
}
