#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>  // 用于设置输出格式

class Student {
private:
    std::vector<int> scores;  // 存储评分

public:
    // 构造函数，用评分列表初始化学生对象
    Student(const std::vector<int>& scores) : scores(scores) {}

    // 计算调整后的平均分
    double calculateAdjustedAverage() {
        if (scores.size() <= 2) return 0.0;  // 如果评分人数不足以去掉一个最高分和一个最低分，返回0分
        
        // 排序分数以去掉一个最高分和一个最低分
        std::sort(scores.begin(), scores.end());
        
        // 计算剩余分数的平均值
        double sum = 0.0;
        for (size_t i = 1; i < scores.size() - 1; ++i) {
            sum += scores[i];
        }
        return sum / (scores.size() - 2);
    }
};

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<Student> students;

    for (int i = 0; i < n; ++i) {
        std::vector<int> scores(m);
        for (int j = 0; j < m; ++j) {
            std::cin >> scores[j];
        }
        students.emplace_back(scores);
    }

    double highestAverage = 0.0;
    for (auto& student : students) {
        double avg = student.calculateAdjustedAverage();
        if (avg > highestAverage) {
            highestAverage = avg;
        }
    }

    // 输出最高平均分，保留两位小数
    std::cout << std::fixed << std::setprecision(2) << highestAverage << std::endl;

    return 0;
}
