#include<iostream>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int a=0;
    for(int i=0;i<n;i++){
        if(x != 6 && x != 7) a += 250;
        x++;
        if(x == 8) x = 1;
    }
    cout<<a;
    return 0;
}