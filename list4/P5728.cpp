#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    vector<vector<int>> scores(n,vector<int>(4));
    for(int i=0;i<n;i++){
        cin>>scores[i][0]>>scores[i][1]>>scores[i][2];
        scores[i][3]=scores[i][0]+scores[i][1]+scores[i][2];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(abs(scores[i][3]-scores[j][3])<=10){
            if(abs(scores[i][0]-scores[j][0])<=5&&abs(scores[i][1]-scores[j][1])<=5&&abs(scores[i][2]-scores[j][2])<=5)
                count++;
        }
        else continue;
        }
    }
    cout<<count<<endl;
}