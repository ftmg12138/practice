#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    cout<<((x%100!=0&&x%4==0)||x%400==0);
    return 0;
}