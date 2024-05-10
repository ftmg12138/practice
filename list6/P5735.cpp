#include <iostream>
#include <cmath>
#include <iomanip>

class Point {
private:    // 私有成员，外部无法直接访问
    double x, y;

public:     // 公共成员，可以被外部访问
    Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}  // 构造函数

    // 以下方法允许外部代码安全地访问和修改私有数据
    double getX() const { return x; }
    double getY() const { return y; }
};

class Triangle {
private:
    Point a, b, c;

    double distance(const Point& p1, const Point& p2) const {  // 计算两点间距离
        return sqrt((p2.getX() - p1.getX()) * (p2.getX() - p1.getX()) +
                    (p2.getY() - p1.getY()) * (p2.getY() - p1.getY()));
    }

public:
    Triangle(const Point& a, const Point& b, const Point& c) : a(a), b(b), c(c) {}

    double perimeter() const {  // 计算周长
        return distance(a, b) + distance(b, c) + distance(c, a);
    }
};

int main() {
    double x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    Point p1(x1, y1), p2(x2, y2), p3(x3, y3);
    Triangle t(p1, p2, p3);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << t.perimeter() << std::endl;
    return 0;
}
