#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int l,m;
    cin>>l>>m;
    vector<int> a(l+1,1);
    vector<pair<int,int>> b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i].first>>b[i].second;
        for(int j=b[i].first;j<=b[i].second;j++)
            a[j]=0;
    }
    int sum=0;
    for(int i=0;i<=l;i++)
        sum+=a[i];
    cout<<sum<<endl;
}