#include<iostream>
using namespace std;
int main()
{
    int k,n=1;
    double s=0;
    cin>>k;
    while(s<=k){
        s+=1/double(n);
        n++;
    }
    cout<<n-1;
}