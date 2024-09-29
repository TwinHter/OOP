#include<bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    double mathPoint, literaturePoint, EnglishPoint, averagePoint;
    string classify; // phan loai hoc sinh
public:
    Student(string name, double mathPoint, double literaturePoint, double EnglishPoint): name(name), mathPoint(mathPoint), literaturePoint(literaturePoint), EnglishPoint(EnglishPoint) {
        averagePoint = (2*mathPoint + literaturePoint + EnglishPoint) / 4;
        if(averagePoint < 5) {
            classify = "Yeu";
        } else if(averagePoint < 6.5) {
            classify = "Trung binh";
        } else if(averagePoint < 8) {
            classify = "Kha";
        } else if(averagePoint < 9) {
            classify = "Gioi";
        } else {
            classify = "Xuat sac";
        }
    }

    void Show() {
        cout << "Ten hoc sinh: " << name << endl;
        cout << "Diem toan: " << mathPoint 
             << " Diem van: " << literaturePoint 
             << " Diem anh: " << EnglishPoint << endl;
        cout << "Diem trung binh: " << averagePoint << endl;
        cout << "Phan loai: " << classify << endl;
    }
};
Student Nhap() {
    string name;
    double mathPoint, literaturePoint, EnglishPoint;
    cout << "Nhap ten hoc sinh: "; getline(cin, name); 
    cout << "Nhap diem toan, van, anh: "; cin >> mathPoint >> literaturePoint >> EnglishPoint;
    return Student(name, mathPoint, literaturePoint, EnglishPoint);
}
int main() {
    Student tmp = Nhap();
    tmp.Show();
}