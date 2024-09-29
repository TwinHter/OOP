#include<bits/stdc++.h>
using namespace std;
class cHocSinh {
private:
    string Id, hoTen;
    bool gioiTinh;
    int namSinh;
    double diemTB;
public:
    cHocSinh(string Id, string hoTen, bool gioiTinh, int namSinh, double diemTB): Id(Id), hoTen(hoTen), gioiTinh(gioiTinh), namSinh(namSinh), diemTB(diemTB) {}
    void Show() {
        cout << "ID: " << Id << '\n';
        cout << "Ho ten: " << hoTen << '\n';
        cout << "Gioi tinh: " << (gioiTinh?"Nam":"Nu") << '\n';
        cout << "Nam sinh: " << namSinh << '\n';
        cout << "Diem trung binh: " << diemTB << '\n';
    }
    bool isValid() {
        return Id != "" && hoTen != "" && namSinh > 0 && diemTB >= 0;
    }
    static cHocSinh compareDiemTB(cHocSinh a, cHocSinh b) {
        if(a.diemTB == b.diemTB) {
            cout << "Hai hoc sinh cung diem trung binh\n";
            return cHocSinh("", "", 0, 0, 0);
        }
        return a.diemTB > b.diemTB ? a : b;
    }
    static cHocSinh compareAge(cHocSinh a, cHocSinh b) {
        if(a.namSinh == b.namSinh) {
            cout << "Hai hoc sinh cung tuoi\n";
            return cHocSinh("", "", 0, 0, 0);
        }
        return a.namSinh < b.namSinh ? a : b;
    }

};

cHocSinh Nhap() {
    cout << "Nhap ID: "; string Id; cin >> Id;
    cout << "Nhap ten: "; string hoTen; getline(cin, hoTen);
    cout << "Nhap gioi tinh (1: Nam, 0: Nu): "; bool gioiTinh; cin >> gioiTinh;
    cout << "Nhap nam sinh: "; int namSinh; cin >> namSinh;
    cout << "Nhap diem trung binh: "; double diemTB; cin >> diemTB;
    return cHocSinh(Id, hoTen, gioiTinh, namSinh, diemTB);
}
int main() {
    cout << "Nhap hoc sinh thu nhat:\n";
    cHocSinh a = Nhap();
    cout << "Nhap hoc sinh thu hai:\n";
    cHocSinh b = Nhap();

    if(cHocSinh::compareDiemTB(a, b).isValid()) {
        cout << "Hoc sinh co diem trung binh cao hon: \n";
        cHocSinh::compareDiemTB(a, b).Show();
    }
    if(cHocSinh::compareAge(a, b).isValid()) {;
        cout << "Hoc sinh co tuoi nho hon: \n";
        cHocSinh::compareAge(a, b).Show();
    }
}