#include<bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    double mathPoint, literaturePoint, EnglishPoint, averagePoint;
    string classify; // phan loai hoc sinh
public:
    Student(string name, double mathPoint, double literaturePoint, double EnglishPoint): name(name), mathPoint(mathPoint), literaturePoint(literaturePoint), EnglishPoint(EnglishPoint) {
        if(min({mathPoint, literaturePoint, EnglishPoint}) < 0 || max({mathPoint, literaturePoint, EnglishPoint}) > 10) {
            throw "Invalid point";
        }
        for(char ch:name) {
            if(ch == ' ') continue;
            if(ch < 'A' || ch > 'z') {
                throw "Invalid name";
            }
        }
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

    string getClassify() {
        return classify;
    }
    string getName() {
        return name;
    }
    double getMathPoint() {
        return mathPoint;
    }
    double getAveragePoint() {
        return averagePoint;
    }
    int namePoint(string s) { // tính sự phù hợp giữa tên người dùng nhập và tên thật
        int pts = 0;
        for(int i=0; i<name.size(); i++) {
            int curpts = 0;
            for(int j=0; j<s.size(); j++) {
                if(i+j >= name.size()) break;
                if(tolower(name[i+j]) == tolower(s[j])) curpts++;
            }
            pts = max(pts, curpts);
        }
        return pts;
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
    cout << "Nhap ten hoc sinh: "; cin.ignore(); getline(cin, name); 
    cout << "Nhap diem toan, van, anh: "; cin >> mathPoint >> literaturePoint >> EnglishPoint;
    return Student(name, mathPoint, literaturePoint, EnglishPoint);
}
int main() {
    int n; cout << "Nhap so luong hoc sinh: "; cin >> n;
    vector<Student> students;
    for(int i = 0; i < n; i++) {
        cout << "Nhap thong tin hoc sinh thu " << i + 1 << endl;
        students.push_back(Nhap());
    }

    for(int i = 0; i < n; i++) {
        cout << "Thong tin hoc sinh thu " << i + 1 << endl;
        students[i].Show();
    }

    int highestAverageId = 0;
    for(int i=1; i<n; i++) {
        if(students[i].getAveragePoint() > students[highestAverageId].getAveragePoint()) {
            highestAverageId = i;
        }
    }
    cout << "Hoc sinh co DTB cao nhat la: " << students[highestAverageId].getName() << endl;

    string searchString;
    cout << "Nhap hoc sinh can tim kiem: "; cin.ignore(); 
    getline(cin, searchString);
    int matchId = 0;
    for(int i=1; i<n; i++) {
        if(students[i].namePoint(searchString) > students[matchId].namePoint(searchString)) {
            matchId = i;
        }
    }
    cout << "Hoc sinh co ten phu hop nhat voi " << searchString << " la: " << students[matchId].getName() << endl;

    double lowestMathPoint = 10;
    for(int i=0; i<n; i++) 
        lowestMathPoint = min(lowestMathPoint, students[i].getMathPoint());

    cout << "Danh sach hoc sinh co diem toan thap nhat la: \n";

    for(int i=0; i<n; i++) {
        if(students[i].getMathPoint() == lowestMathPoint)
            cout << students[i].getName() << '\n';
    }

}