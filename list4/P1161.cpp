#include<iostream>
#include<vector>
using namespace std;
#include <cmath>

int main()
{
    int n, ans = 0;
    cin >> n;
    while (n--)
    {
        double a;
        int t;
        cin >> a >> t;
        for (int i = 1; i <= t; i++)
        {
            ans ^= int(a * i);
        }
    }
    cout << ans;
}