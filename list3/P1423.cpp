#include<iostream>
using namespace std;
int main()
{
    double s,a=2;
    cin>>s;
    int n=0;
    while(s>0){
        s-=a;
        a*=0.98;
        n++;
    }
    cout<<n;
    return 0;
}