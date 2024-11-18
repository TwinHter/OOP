#include<iostream>
#include<string>
using namespace std;
class Sinhvien {
protected:
    string MSSV;
    string hoten;
    string diachi;
    int tongtc;
    double dtb;
public:
    Sinhvien(): MSSV(""), hoten(""), diachi(""), tongtc(0), dtb(0){}
    Sinhvien(string MSSV, string hoten, string diachi, int tongtc, double dtb): MSSV(MSSV), hoten(hoten), diachi(diachi), tongtc(tongtc), dtb(dtb) {}
    Sinhvien(const Sinhvien &sv): MSSV(sv.MSSV), hoten(sv.hoten), diachi(sv.diachi), tongtc(sv.tongtc), dtb(sv.dtb) {}
    ~Sinhvien() {}
    virtual void Nhap() {
        cout << "Nhap MSSV: "; cin >> MSSV;
        cin.ignore();
        cout << "Nhap ho ten: "; getline(cin, hoten);
        cout << "Nhap dia chi: "; getline(cin, diachi);
        cout << "Nhap tong so tin chi: "; cin >> tongtc;
        cin.ignore();
        cout << "Nhap diem trung binh: "; cin >> dtb;
        cin.ignore();
    }
    virtual void Xuat() {
        cout << "MSSV: " << MSSV << endl;
        cout << "Ho ten: " << hoten << endl;
        cout << "Dia chi: " << diachi << endl;
        cout << "Tong so tin chi: " << tongtc << endl;
        cout << "Diem trung binh: " << dtb << endl;
    }   
};

class SinhvienDaihoc: public Sinhvien {
private:
    double diemtn;
public:
    SinhvienDaihoc(): Sinhvien(), diemtn(0) {}
    SinhvienDaihoc(string MSSV, string hoten, string diachi, int tongtc, double dtb, double diemtn): Sinhvien(MSSV, hoten, diachi, tongtc, dtb), diemtn(diemtn) {}
    SinhvienDaihoc(const SinhvienDaihoc &sv): Sinhvien(sv), diemtn(sv.diemtn) {}
    ~SinhvienDaihoc() {}
    void Nhap() override {
        cout << "Sinh vien dai hoc" << endl;
        Sinhvien::Nhap();
        cout << "Nhap diem tot nghiep: "; cin >> diemtn;
        cin.ignore();
    }
    void Xuat() override {
        Sinhvien::Xuat();
        cout << "Diem tot nghiep: " << diemtn << endl;
    }
    bool isTotNghiep() {
        return (tongtc >= 120 && dtb >= 5 && diemtn >= 5);
    }
};

class SinhvienCaoDang: public Sinhvien {
private:
    string tenLuanVan;
    double diemLuanVan;
public:
    SinhvienCaoDang(): Sinhvien(), tenLuanVan(""), diemLuanVan(0) {}
    SinhvienCaoDang(string MSSV, string hoten, string diachi, int tongtc, double dtb, string tenLuanVan, double diemLuanVan): Sinhvien(MSSV, hoten, diachi, tongtc, dtb), tenLuanVan(tenLuanVan), diemLuanVan(diemLuanVan) {}
    SinhvienCaoDang(const SinhvienCaoDang &sv): Sinhvien(sv), tenLuanVan(sv.tenLuanVan), diemLuanVan(sv.diemLuanVan) {}
    ~SinhvienCaoDang() {}
    void Nhap() override {
        cout << "Sinh vien cao dang" << endl;
        Sinhvien::Nhap();
        cout << "Nhap ten luan van: "; getline(cin, tenLuanVan);
        cout << "Nhap diem luan van: "; cin >> diemLuanVan;
        cin.ignore();
    }
    void Xuat() override {
        Sinhvien::Xuat();
        cout << "Ten luan van: " << tenLuanVan << endl;
        cout << "Diem luan van: " << diemLuanVan << endl;
    }
    bool isTotNghiep() {
        return (tongtc >= 170 && dtb >= 5 && diemLuanVan >= 5);
    }
};

int main() {
    SinhvienDaihoc sv1;
    sv1.Nhap();
    cout << "Sinh vien nay " << (sv1.isTotNghiep() ? "da" : "chua") << " tot nghiep" << endl;

    cout << endl;

    SinhvienCaoDang sv2;
    sv2.Nhap();
    cout << "Sinh vien nay " << (sv2.isTotNghiep() ? "da" : "chua") << " tot nghiep" << endl;

    cout << "Thong tin sinh vien dai hoc" << endl;
    sv1.Xuat();
    cout << endl;
    cout << "Thong tin sinh vien cao dang" << endl;
    sv2.Xuat();
    return 0;
}