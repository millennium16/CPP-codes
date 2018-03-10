//iterative approach
#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==b)
        return a;
    if(a>b)
        return gcd(a-b,a);
    return gcd(a,b-a);
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<"GCD is "<<gcd(m,n);
    return 0;
}
