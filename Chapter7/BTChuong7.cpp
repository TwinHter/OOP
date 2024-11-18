#include<iostream>
#include<string>
using namespace std;

class NhanVien {
protected:
    string manv;
    string hoten;
    int tuoi;
    int luongCoBan;
    int luong;
public:
    NhanVien(): manv(""), hoten(""), tuoi(0), luongCoBan(0), luong(0) {}
    NhanVien(string manv, string hoten, int tuoi, int luongCoBan): manv(manv), hoten(hoten), tuoi(tuoi), luongCoBan(luongCoBan) {}
    NhanVien(const NhanVien &nv): manv(nv.manv), hoten(nv.hoten), tuoi(nv.tuoi), luongCoBan(nv.luongCoBan) {}
    ~NhanVien() {}
    virtual void Nhap() {
        cout << "Nhap ho ten: "; cin.ignore();
        getline(cin, hoten);
        cout << "Nhap ma nhan vien: "; cin >> manv;
        cout << "Nhap tuoi: "; cin >> tuoi;
        cout << "Nhap luong co ban: "; cin >> luongCoBan;
    }
    virtual void Xuat() {
        cout << "Ma nhan vien: " << manv << " ";
        cout << "Ho ten: " << hoten << " ";
        cout << "Tuoi: " << tuoi << " ";
        cout << "Luong co ban: " << luongCoBan << " ";
        cout << "Luong: " << luong << endl;
    }
    virtual void TinhLuong() {
        luong = luongCoBan;
    }
    int getLuong() {
        return luong;
    }
    string getName() {
        return hoten;
    }
    string getMaNV() {
        return manv;
    }
};
class NhanVienVanPhong: public NhanVien {
private:
    int soNgayLamViec;
    int troCap;
public:
    NhanVienVanPhong(): NhanVien(), soNgayLamViec(0), troCap(0) {}
    NhanVienVanPhong(string manv, string hoten, int tuoi, int luongCoBan, int soNgayLamViec, int troCap): NhanVien(manv, hoten, tuoi, luongCoBan), soNgayLamViec(soNgayLamViec), troCap(troCap) {}
    NhanVienVanPhong(const NhanVienVanPhong &nvvp): NhanVien(nvvp), soNgayLamViec(nvvp.soNgayLamViec), troCap(nvvp.troCap) {}
    ~NhanVienVanPhong() {}
    void Nhap() override{
        NhanVien::Nhap();
        cout << "Nhap so ngay lam viec: "; cin >> soNgayLamViec;
        cout << "Nhap tro cap: "; cin >> troCap;
    }
    void Xuat() override{
        NhanVien::Xuat();
        cout << "So ngay lam viec: " << soNgayLamViec << " ";
        cout << "Tro cap: " << troCap << endl;
    }
    void TinhLuong() override{
        luong = luongCoBan + soNgayLamViec*200000 + troCap;
    }
};
class NhanVienSanXuat: public NhanVien {
private:
    int soSanPham;
public:
    NhanVienSanXuat(): NhanVien(), soSanPham(0) {}
    NhanVienSanXuat(string manv, string hoten, int tuoi, int luongCoBan, int soSanPham): NhanVien(manv, hoten, tuoi, luongCoBan), soSanPham(soSanPham) {}
    NhanVienSanXuat(const NhanVienSanXuat &nvvp): NhanVien(nvvp), soSanPham(nvvp.soSanPham) {}
    ~NhanVienSanXuat() {}
    void Nhap() override{
        NhanVien::Nhap();
        cout << "Nhap so san pham: "; cin >> soSanPham;
    }
    void Xuat() override{
        NhanVien::Xuat();
        cout << "So san pham: " << soSanPham << endl;
    }
    void TinhLuong() override{
        luong = luongCoBan + soSanPham*2000;
    }
};
class NhanVienQuanLy: public NhanVien {
private:
    int heSoChucVu;
    int thuong;
public:
    NhanVienQuanLy(): NhanVien(), heSoChucVu(0), thuong(0) {}
    NhanVienQuanLy(string manv, string hoten, int tuoi, int luongCoBan, int heSoChucVu, int thuong): NhanVien(manv, hoten, tuoi, luongCoBan), heSoChucVu(heSoChucVu), thuong(thuong) {}
    NhanVienQuanLy(const NhanVienQuanLy &nvvp): NhanVien(nvvp), heSoChucVu(nvvp.heSoChucVu), thuong(nvvp.thuong) {}
    ~NhanVienQuanLy() {}
    void Nhap() override{
        NhanVien::Nhap();
        cout << "Nhap he so chuc vu: "; cin >> heSoChucVu;
        cout << "Nhap thuong: "; cin >> thuong;
    }
    void Xuat() override{
        NhanVien::Xuat();
        cout << "He so chuc vu: " << heSoChucVu << " ";
        cout << "Thuong: " << thuong << endl;
    }
    void TinhLuong() override{
        luong = luongCoBan + heSoChucVu*luongCoBan + thuong;
    }
};

int main() {
    int nvvp, nvsx, nvql;
    cout << "Nhap so nhan vien van phong: "; cin >> nvvp;
    cout << "Nhap so nhan vien san xuat: "; cin >> nvsx;
    cout << "Nhap so nhan vien quan ly: "; cin >> nvql;

    vector<NhanVien*> nv;
    for(int i = 0; i < nvvp; i++) {
        nv.push_back(new NhanVienVanPhong());
        cout << "Nhap thong tin nhan vien van phong thu " << i+1 << endl;
        nv[i]->Nhap();
    }
    for (int i = nvvp; i < nvvp + nvsx; i++) {
        nv.push_back(new NhanVienSanXuat());
        cout << "Nhap thong tin nhan vien san xuat thu " << i+1-nvvp << endl;
        nv[i]->Nhap();
    }
    for (int i = nvvp + nvsx; i < nvvp + nvsx + nvql; i++) {
        nv.push_back(new NhanVienQuanLy());
        cout << "Nhap thong tin nhan vien quan ly thu " << i+1-nvvp-nvsx << endl;
        nv[i]->Nhap();
    }

    long long sum = 0;
    for(int i = 0; i < nvvp + nvsx + nvql; i++) {
        nv[i]->TinhLuong();
        sum += nv[i]->getLuong();
        cout << "Nhan vien " << nv[i]->getName() << " co luong la: " << nv[i]->getLuong() << endl;
    }

    cout << "Thong tin cua tat ca nhan vien. " << endl;
    for(int i = 0; i < nvvp + nvsx + nvql; i++) {
        nv[i]->Xuat();
    }

    cout << "Thong tin tong luong cua tat ca nhan vien: " << sum << endl;

    string name; 
    cout << "Nhap ten nhan vien can tim: "; cin.ignore();
    getline(cin, name);
    cout << "Ma nhan vien can tim: ";
    for(int i = 0; i < nvvp + nvsx + nvql; i++) {
        if(nv[i]->getName() == name) cout << nv[i]->getMaNV() << " ";
    }
}