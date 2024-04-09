#include<iostream>
using namespace std;
int main(){
    int a,n=1;
    cin>>a;
    while(a != 1){
        a/=2;
        n++;
    }
    cout<<n;
}