#include<iostream>
using namespace std;
int main()
{
    long long a[100];
    int i=0;
    do{
        cin>>a[i];
    }while(a[i++]!=0);
    for(int j=i-2;j>=0;j--){
        cout<<a[j]<<' ';
    }
}