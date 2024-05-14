#include <iostream>
#include <vector>
using namespace std;

// 函数声明，用于递归赦免作弊者
void pardon(vector<vector<int>>& v, int startX, int startY, int size) {
    if (size == 2) {
        v[startX][startY] = 0; // 标记为赦免
        return;
    }
    
    int halfSize = size / 2; // 计算每个子矩阵的大小
    // 赦免左上角矩阵中的所有作弊者
    for (int i = startX; i < startX + halfSize; i++) {
        for (int j = startY; j < startY + halfSize; j++) {
            v[i][j] = 0;
        }
    }

    // 递归处理其他三个矩阵
    pardon(v, startX, startY + halfSize, halfSize); // 右上角
    pardon(v, startX + halfSize, startY, halfSize); // 左下角
    pardon(v, startX + halfSize, startY + halfSize, halfSize); // 右下角
}

int main() {
    int n;
    cin >> n; // 读取n的值
    int size = 1 << n; // 计算 2^n

    // 创建并初始化矩阵
    vector<vector<int>> matrix(size, vector<int>(size, 1));
    
    // 递归赦免作弊者
    pardon(matrix, 0, 0, size);

    // 输出矩阵
    for (const auto& row : matrix) {
        for (size_t i = 0; i < row.size(); ++i) {
            if (i > 0) cout << " ";
            cout << row[i];
        }
        cout << endl;
    }

    return 0;
}
