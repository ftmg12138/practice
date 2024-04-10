#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int n,max=-1,min=11,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
        sum+=a[i];
    }
    sum-=max+min;
    cout<<fixed<<setprecision(2)<<double(sum)/(n-2)<<endl;
}