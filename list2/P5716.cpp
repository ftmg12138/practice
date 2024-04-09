#include<iostream> 
using namespace std;
int main(){
    int y,m,ifleap;
    cin>>y>>m;
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0) ifleap = 1;
    else ifleap = 0;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    if(ifleap) cout<<b[m-1];
    else cout<<a[m-1];
    return 0;
}