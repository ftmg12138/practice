#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a(81,0);
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    for (int i = 0; i < s1; i++)
    {
        for(int j=0;j<s2;j++)
        {
            for(int k=0;k<s3;k++)
            {
                a[i+j+k]++;
            }
        }
    }
    cout<<*max_element(a.begin(),a.end()); // Fix: Dereference the iterator before using the << operator.
}