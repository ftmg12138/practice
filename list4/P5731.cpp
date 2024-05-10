#include<iostream>
#include<vector>
#include <algorithm>
#include <iomanip>
using namespace std;
void generateMatrix(int n){
    vector<vector<int>> a(n,vector<int>(n,0));
    int row = 0, col = 0;
    int directions[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int directionIndex = 0;
    for(int i=1;i<=n*n;i++){
        a[row][col] = i;
        int nextRow = row + directions[directionIndex][0], nextCol = col + directions[directionIndex][1];
        if(nextRow<0||nextRow>=n||nextCol<0||nextCol>=n||a[nextRow][nextCol]!=0){
            directionIndex = (directionIndex+1)%4;
        }
        row += directions[directionIndex][0];
        col += directions[directionIndex][1];
    }
    for(const auto& row:a){
        for(const auto& num:row){
            cout<<setw(3)<<num;
        }
        cout<<endl;
    }
}   
int main()
{
    int n;
    cin>>n;
    generateMatrix(n);
    return 0;
}