#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a(10001,0);
    int n,count=0;
    cin>>n;
    vector<int> b(n);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        b[i-1]=x;
        a[x]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int c=b[i]+b[j];
            if(c<=10000)
            if(a[c]==1)
            {
                count++;
                a[c]=0;
            }
        }
    }
    cout<<count;
}