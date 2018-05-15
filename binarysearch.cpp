#define forf(i,m,n) for(int i=m;i<n;i++)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]={12,3,14,5,63,2,7,3,5,1};
    vector<int>v(a,a+10);
    sort(v.begin(),v.end());
    forf(i,0,10)
    cout<<v[i]<<" ";
    cout<<endl;
    if(binary_search(v.begin(),v.end(),4))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    vector <int>::iterator low,up;
    low=lower_bound(v.begin(),v.end(),63);
    up=upper_bound(v.begin(),v.end(),63);
    cout<<low-v.begin()<<" "<<up-v.begin()<<endl;
    return 0;
}
