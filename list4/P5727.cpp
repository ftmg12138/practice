#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    int n;
    cin>>n;
    while(n!=1)
    {
        a.push_back(n);
        if(n%2==0) n/=2;
        else n=n*3+1;
    }
    a.push_back(1);
    for(auto it = a.rbegin();it != a.rend();++it){
        cout<< *it <<" ";
    }
    return 0;
}