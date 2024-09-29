#include<bits/stdc++.h>
using namespace std;

class Point {
private:
    double x, y;
public:
    Point(double x, double y): x(x), y(y) {}
    static double Distance(Point a, Point b) {
        return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
    }
};

Point Nhap() {
    double x, y;
    cout << "Nhap 2 so la toa do diem: "; cin >> x >> y;
    return Point(x, y);
}
int main() {
    Point p1 = Nhap(), p2 = Nhap();

    cout << "Khoang cach giua 2 diem: " << Point::Distance(p1, p2) << endl;
}