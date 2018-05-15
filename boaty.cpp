#define ll long long int
#include <bits/stdc++.h>
using namespace std;

int main()
{
  double d,t,v1,v2;
  cin>>d>>t>>v1>>v2;
  double time=((d-(v1-v2)*t)/v1);
  cout<<time<<endl;
  double tt=t+time;
  cout<<ceil(tt);
  return 0;
}
