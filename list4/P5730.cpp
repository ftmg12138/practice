#include<iostream>
#include<vector>
using namespace std;
vector<string> dictionary(int n){
    vector<string> dic(5);
    switch(n){
        case 0:
            dic[0]="XXX";
            dic[1]="X.X";
            dic[2]="X.X";
            dic[3]="X.X";
            dic[4]="XXX";
            break;
        case 1:
            dic[0]="..X";
            dic[1]="..X";
            dic[2]="..X";
            dic[3]="..X";
            dic[4]="..X";
            break;
        case 2:
            dic[0]="XXX";
            dic[1]="..X";
            dic[2]="XXX";
            dic[3]="X..";
            dic[4]="XXX";
            break;
        case 3:
            dic[0]="XXX";
            dic[1]="..X";
            dic[2]="XXX";
            dic[3]="..X";
            dic[4]="XXX";
            break;
        case 4:
            dic[0]="X.X";
            dic[1]="X.X";
            dic[2]="XXX";
            dic[3]="..X";
            dic[4]="..X";
            break;
        case 5:
            dic[0]="XXX";
            dic[1]="X..";
            dic[2]="XXX";
            dic[3]="..X";
            dic[4]="XXX";
            break;
        case 6:
            dic[0]="XXX";
            dic[1]="X..";
            dic[2]="XXX";
            dic[3]="X.X";
            dic[4]="XXX";
            break;
        case 7:
            dic[0]="XXX";
            dic[1]="..X";
            dic[2]="..X";
            dic[3]="..X";
            dic[4]="..X";
            break;
        case 8:
            dic[0]="XXX";
            dic[1]="X.X";
            dic[2]="XXX";
            dic[3]="X.X";
            dic[4]="XXX";
            break;
        case 9:
            dic[0]="XXX";
            dic[1]="X.X";
            dic[2]="XXX";
            dic[3]="..X";
            dic[4]="XXX";
            break;
        default:
            break;
    }
    return dic;
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> a(n,0);
    for(int i=0;i<n;i++)
        a[i]=s[i]-'0';
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<n;j++)
        {
            vector<string> dic=dictionary(a[j]);
            if(j==n-1)
                cout<<dic[i];
            else
                cout<<dic[i]<<'.';
        }
        cout<<endl;
    }
}