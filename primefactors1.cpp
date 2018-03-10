//O(sqrt(n)) = SIeve of Erasthamus gives O(logn)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n%2==0)
    {
        n=n/2;
        cout<<2<<" ";
    }
    for(int i=3;i<sqrt(n);i=i+2)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>2)
        cout<<n<<" ";
    return 0;
}
