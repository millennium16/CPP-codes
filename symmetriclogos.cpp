#define ll long long int
#define forf(i,a,b) for(ll i=a;i<b;i++)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n];
        forf(i,0,n)
        {
            forf(j,0,n)
                cin>>a[i][j];
        }
        int flag;
        forf(i,0,n)
        {
            forf(j,0,n)
            {
                if(a[i][j]==a[i][n-j-1] && a[i][j]==a[n-i-1][j])
                    flag=1;
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}
