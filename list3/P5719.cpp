#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,k;
    int sum1=0,sum2=0,count1=0,count2=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        if(i % k == 0) {sum1 += i;count1++;} 
        else {sum2 += i;count2++;}
    }
    cout<<fixed<<setprecision(1)<<double(sum1)/count1<<" "<<double(sum2)/count2;
    return 0;
}