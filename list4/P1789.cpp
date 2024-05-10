#include<iostream>
#include<vector>
using namespace std;
void glowstoneShine(int x,int y,vector <vector <int> > &a)
{
    for(int i=x-2;i<=x+2;i++)
    {
        for(int j=y-2;j<=y+2;j++)
        {
            if(i>=0 && i<a.size() && j>=0 && j<a[0].size())
            {
                a[i][j] = 1;
            }
        }
    }
}
void torchShine(int x,int y,vector <vector <int> > &a)
{
    for(int i=x-2;i<=x+2;i++)
    {
        int aaa = abs(i-x);
        for(int j=y-2+aaa;j<=y+2-aaa;j++)
        {
            if(i>=0 && i<a.size() && j>=0 && j<a[0].size())
            {
                a[i][j] = 1;
            }
        }
    } 
}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector <vector <int> > a(n,vector <int> (n,0));
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        torchShine(x-1,y-1,a);
    }
    for(int i=0;i<k;i++)
    {
        int x,y;
        cin>>x>>y;
        glowstoneShine(x-1,y-1,a);
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j] == 0)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}