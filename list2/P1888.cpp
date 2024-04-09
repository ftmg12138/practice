#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a > b) swap(a,b);
    if(a > c) swap(a,c);
    if(b > c) swap(b,c);
    //a和c的最大公约数d
    int d = 1;
    for(int i=1;i<=a;i++){
        if(a % i == 0 && c % i == 0) d = i;
    }
    cout<<a/d<<"/"<<c/d;
    return 0;
}