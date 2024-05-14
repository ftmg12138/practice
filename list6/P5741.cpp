#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

class Student {
private:
    string name;
    int Chinese;
    int Math;
    int English;

public:
    Student(string name, int Chinese, int Math, int English)
        : name(name), Chinese(Chinese), Math(Math), English(English) {}

    int getSum() {
        return Chinese + Math + English;
    }

    string getName() {
        return name;
    }

    int CompareName(Student& s) {
        return name.compare(s.getName());
    }

    int ifEqual(Student& s) {
        if ((abs(Chinese - s.Chinese) <= 5) && (abs(Math - s.Math) <= 5) && (abs(English - s.English) <= 5) && (abs(getSum() - s.getSum()) <= 10)) {
            return 1;
        }
        return 0;
    }
};

int main() {
    vector<Student> students;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name;
        int Chinese, Math, English;
        cin >> name >> Chinese >> Math >> English;
        students.push_back(Student(name, Chinese, Math, English));
    }

    vector<pair<string, string>> results;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].ifEqual(students[j])) {
                if (students[i].CompareName(students[j]) < 0) {
                    results.push_back(make_pair(students[i].getName(), students[j].getName()));
                } else {
                    results.push_back(make_pair(students[j].getName(), students[i].getName()));
                }
            }
        }
    }

    // Sort the results to ensure the output is in lexicographical order
    sort(results.begin(), results.end());

    for (auto &pair : results) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}
