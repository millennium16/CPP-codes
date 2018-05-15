#define ll long long int
#define forf(i,a,b) for(ll i=a;i<b;i++)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ll h,w;
    int a[h][w],t[h][w];
    memset(t,-1,sizeof(a));
    forf(i,0,h)
    {
        forf(j,0,w)
        {
            char x;
            cin>>x;
            if(x=='U')
                a[i][j]=2;
            else if(x=='R')
                a[i][j]=3;
            else if(x=='D')
                a[i][j]=4;
            else if(x=='L')
                a[i][j]=5;
        }
    }
    if(a[0][0]==2 || a[0][0]==5)
        t[0][0]=1;
    if(a[h-1][0]==4 || a[h-1][0]==5)
        t[h-1][0]=1;
    if(a[0][j-1]==3 || a[0][j-1]==2)
        t[0][j-1]=1;
    if(a[h-1][j-1]==3 || a[h-1][j-1]==4)
        t[h-1][j-1]=1;
    forf
    return 0;
}
