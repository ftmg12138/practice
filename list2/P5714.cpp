#include<iostream>  
using namespace std;
int main(){
    double h,m;
    cin>>h>>m;
    double BMI = h / (m * m);
    if(BMI < 18.5) cout<<"Underweight";
    else if(BMI < 24) cout<<"Normal";
    else cout<<BMI<<"\n"<<"Overweight";
}