#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],min;
    for(int i=0;i<n;i++){ 
        cin>>a[i];
        if(i == 0) min = a[i];
        if(a[i] < min) min = a[i];
    }
    cout<<min;
}