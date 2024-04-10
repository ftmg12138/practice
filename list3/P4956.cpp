#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n/52;
    int x,k;
    for(k=1;k<=min(m/21,100);k++){
        for(x=1;x<=min(m/7,100);x++){
            if(21*k+7*x==m){
                cout<<x<<endl<<k<<endl;
                return 0;
            }
        }
    }
}