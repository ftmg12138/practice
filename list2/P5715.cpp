#include<iostream>
using namespace std;
int main(){
    //三位数从小到大排序
    int a,b,c;
    cin>>a>>b>>c;
    if(a > b) swap(a,b);
    if(a > c) swap(a,c);
    if(b > c) swap(b,c);
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}