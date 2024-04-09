#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,max=-1,min=1000000;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    while(n>0)
    {
        if(a[n]>max)
        {
            max=a[n];
        }
        if(a[n]<min)
        {
            min=a[n];
        }
        n--;
    }
    cout<<max-min<<endl;
}