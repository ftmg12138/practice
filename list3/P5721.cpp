#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
        {if(a<10){
            cout<<0<<a;
        }
        else cout<<a;a++;}
        cout<<endl;
    }
}