#include<iostream>
#include<vector>
using namespace std;
bool judgeYear(int year){
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return true;
    return false;
}
int main(){
    vector<int> years(1500,0);
    int count = 0;
    int x,y;
    cin>>x>>y;
    for(int i = x;i <= y;i++){
        if(judgeYear(i)){
            years[count] = i;
            count++;
        }
    }
    cout<<count<<endl;
    for(int i = 0;i < count;i++){
        cout<<years[i]<<' ';
    }
}