#include <iostream>

using namespace std;

int main() {
    long n;
    cin>>n;
    long sum=0;
    while(n--)
    {
      long p;
      cin>>p;
      sum+=p;
    }
    if(sum%2==0)
    cout<<0;
    else
    cout<<1;
    return 0;
}
