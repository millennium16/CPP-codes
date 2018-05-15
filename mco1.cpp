#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        vector<long> a;
        vector<long> b;
        int x;
        long suma =0,sumb=0;
        for(long i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
            suma+= x;
        }
        for(long i=0;i<n;i++)
        {
            cin>>x;
            b.push_back(x);
            sumb+=x;
        }
        long maxi1 = *max_element(a.begin(),a.end());
        long maxi2 = *max_element(b.begin(),b.end());
        suma -= maxi1;
        sumb -= maxi2;
        if(suma<sumb)
            cout<<"Alice"<<endl;
        else if(sumb<suma)
            cout<<"Bob"<<endl;
        else if(su  ma==sumb)
            cout<<"Draw"<<endl;
    }
    return 0;
}

