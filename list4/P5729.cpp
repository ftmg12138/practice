#include <iostream>
#include <vector>
using namespace std;

int main() {
    int w, x, h, q;
    cin >> w >> x >> h;
    // 初始化所有小方块为存在（1）
    vector<vector<vector<int>>> cube(w, vector<vector<int>>(x, vector<int>(h, 1)));

    cin >> q;
    for(int i = 0; i < q; i++) {
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        // 处理切割，将对应小方块设置为0
        for(int xi = x1 - 1; xi < x2; xi++) {
            for(int yi = y1 - 1; yi < y2; yi++) {
                for(int zi = z1 - 1; zi < z2; zi++) {
                    cube[xi][yi][zi] = 0;
                }
            }
        }
    }

    // 统计剩余的小方块数量
    int remaining = 0;
    for(int xi = 0; xi < w; xi++) {
        for(int yi = 0; yi < x; yi++) {
            for(int zi = 0; zi < h; zi++) {
                if(cube[xi][yi][zi] == 1) {
                    remaining++;
                }
            }
        }
    }

    cout << remaining << endl;
    return 0;
}
