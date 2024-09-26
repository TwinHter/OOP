#include<bits/stdc++.h>
using namespace std;

class HocSinh {
private:
    string id;
    string name;
    bool isBoy;
    double mathPoint, physicPoint, literaturePoint, averagePoint;

public:
    void Show() {
        cout << "ID: " << id << '\n';
        cout << "Ten: " << name << '\n';
        cout << "Gioi tinh: " << (isBoy ? "Boy" : "Girl") << '\n';
        cout << "Diem toan: " << mathPoint << '\n';
        cout << "Diem ly: " << physicPoint << '\n';
        cout << "Diem van: " << literaturePoint << '\n';
        cout << "Diem trung binh: " << averagePoint << '\n';
    }
    void Input() {
        cout << "Nhap ID: "; cin >> id;
        cout << "Nhap ten: "; cin >> name;
        cout << "Nhap gioi tinh (1: Nam, 0: Nu): "; cin >> isBoy;
        cout << "Nhap diem toan: "; cin >> mathPoint;
        cout << "Nhap diem ly: "; cin >> physicPoint;
        cout << "Nhap diem van: "; cin >> literaturePoint;
        averagePoint = (mathPoint + physicPoint + literaturePoint) / 3;
    }
};
int main() {
    HocSinh hs;
    hs.Input();
    hs.Show();
}