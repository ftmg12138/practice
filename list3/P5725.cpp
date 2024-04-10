#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //打印正方形
    for(int i=1;i<=n*n;i++)
    {
        if(i<10){
            cout<<0<<i;
        }
        else cout<<i;
        if(i%n==0) cout<<endl;
    }
    cout<<endl;
    //打印三角形
    int num=1;
    for(int i=1;i<=n*n;i++)
    {   
        int row=ceil(double(i)/n);
        if(i-(row-1)*n<=n-row){
            cout<<"  ";
        }
        else{
            if(num<10){
                cout<<0<<num;
            }
            else cout<<num;
            num++;
        }
        if(i%n==0) cout<<"\n";
    }
}