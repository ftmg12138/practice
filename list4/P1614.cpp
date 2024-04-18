#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,sum=0,min=999999,count=0;
    cin>>n>>m;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(count == m){
            if(sum<min)
                min=sum;
            sum+=a[i];
            sum-=a[i-m];
        }
        else if(count < m){
            count++;
            sum+=a[i];
        }
    }
    if(sum<min)
        min=sum;
    cout<<min;
}