#include<iostream>
using namespace std;

int main(){
    int rule1, rule2;
    int x;
    cin >> x; // 使用cin来输入x
    rule1 = !(x % 2);
    rule2 = x > 4 && x <= 12;
    // 使用cout来输出，并且通过条件操作符实现条件逻辑
    cout << (rule1 && rule2) << " "
         << (rule1 || rule2) << " "
         << (rule1 ^ rule2) << " "
         << (!rule1 && !rule2);
    return 0;
}
