#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double n,ans=0;
    cin>>n;
    if(n<150) ans = n*0.4463;
    else if(n<400) ans = 150*0.4463 + (n-150)*0.4663;
    else ans = 150*0.4463 + 250*0.4663 + (n-400)*0.5663;
    cout<<fixed<<setprecision(1)<<ans;
    return 0;
}