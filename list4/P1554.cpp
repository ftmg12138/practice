#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a(10,0);
    int M,N;
    cin>>M>>N;
    for(int i=M;i<=N;i++){
        int t=i;
        while(t){
            a[t%10]++;
            t/=10;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<' ';
    }
    
}