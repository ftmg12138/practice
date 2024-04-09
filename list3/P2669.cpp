#include<iostream>
using namespace std;

// 直接使用公式计算累加和
int sum_plus(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int k;
    cin >> k;
    int i = 1;

    // 使用更有效的方法来找到满足条件的 i
    while (sum_plus(i) < k) {
        i++;
    }

    i--; // 找到最后一个使得 sum_plus(i) < k 的 i

    // 使用公式计算 money，避免了内部循环
    int money = (i * (i + 1) * (2 * i + 1)) / 6 + (k - sum_plus(i)) * (i + 1);

    cout << money << endl;
    return 0;
}
