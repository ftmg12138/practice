#include<iostream>
using namespace std;
int reverse(int n)
{
    int res=0;
    while(n)
    {
        res=res*10+n%10;
        n/=10;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int m=reverse(n);
    cout<<m;
}