#include<iostream>
using namespace std;
int main()
{
    int n,count=1,max=1;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]-a[i-1]==1){
            count++;
            if (count>max)
            {
                max = count;
            }
            
        }
        else count=1;
    }
    cout<<max;
}