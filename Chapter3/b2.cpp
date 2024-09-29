#include<bits/stdc++.h>
using namespace std;
#define PI 3.14
#define pdd pair<double, double>
class HinhTron {
private:
    double ban_kinh;
    pdd tam_dt;
public:
    HinhTron(double ban_kinh, pdd tam): ban_kinh(ban_kinh), tam_dt(tam) {}
    double ChuVi() {
        return 2*PI*ban_kinh;
    }
    double DienTich() {
        return PI*ban_kinh*ban_kinh;
    }
};
int main() {
    double ban_kinh;
    pdd tam_dt;

    cout << "Nhap 2 so la toa do tam duong tron: "; cin >> tam_dt.first >> tam_dt.second;
    cout << "Nhap ban kinh duong tron: "; cin >> ban_kinh;

    HinhTron ht(ban_kinh, tam_dt);
    cout << "Chu vi duong tron: " << ht.ChuVi() << endl;
    cout << "Dien tich duong tron: " << ht.DienTich() << endl;
}