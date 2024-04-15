#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(34,0);
    vector<vector<int>> b(n,vector<int>(8,0));
    vector<int> c(8,0);
    for(int i=0;i<7;i++)
    {
        int x;
        cin>>x;
        a[x]=1;
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<7;j++)
        {
            int x;
            cin>>x;
            count+=a[x];
        }
        c[count]++;
    }
    for(int i=7;i>=1;i--)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}