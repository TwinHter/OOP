#include<iostream>
#include<string>
using namespace std;
class NhanVien {
protected:
    string maNV;
    string hoTen;
    int tuoi;
    string SDT;
    string email;
    int luongCoBan;
    int salary;
public:
    NhanVien(): maNV(""), hoTen(""), tuoi(0), SDT(""), email(""), luongCoBan(0) {}
    NhanVien(string maNV, string hoTen, int tuoi, string SDT, string email, int luongCoBan): maNV(maNV), hoTen(hoTen), tuoi(tuoi), SDT(SDT), email(email), luongCoBan(luongCoBan) {}
    NhanVien(const NhanVien &nv): maNV(nv.maNV), hoTen(nv.hoTen), tuoi(nv.tuoi), SDT(nv.SDT), email(nv.email), luongCoBan(nv.luongCoBan) {}
    ~NhanVien() {}

    string getMaNV() {
        return maNV;
    }
    virtual int TinhLuong() {
        return 0;
    }

    friend istream& operator>>(istream &is, NhanVien &nv) {
        cout << "Nhap ma nhan vien: "; getline(is, nv.maNV);
        cout << "Nhap ho ten: "; getline(is, nv.hoTen);
        cout << "Nhap tuoi: "; is >> nv.tuoi;
        is.ignore();
        cout << "Nhap SDT: "; getline(is, nv.SDT);
        cout << "Nhap email: "; getline(is, nv.email);
        cout << "Nhap luong co ban: "; is >> nv.luongCoBan;
        is.ignore();
        return is;
    }
    friend ostream& operator<<(ostream &os, NhanVien &nv) {
        os << "Ma nhan vien: " << nv.maNV << " ";
        os << "Ho ten: " << nv.hoTen << " ";
        os << "Tuoi: " << nv.tuoi << " ";
        os << "SDT: " << nv.SDT << " ";
        os << "Email: " << nv.email << " ";
        os << "Luong co ban: " << nv.luongCoBan << endl;
        return os;
    }
};

class LapTrinhVien: public NhanVien {
private:
    int overTime;
public:
    LapTrinhVien(): NhanVien(), overTime(0) {}
    LapTrinhVien(string maNV, string hoTen, int tuoi, string SDT, string email, int luongCoBan, int overTime): NhanVien(maNV, hoTen, tuoi, SDT, email, luongCoBan), overTime(overTime) {}
    LapTrinhVien(const LapTrinhVien &ltv): NhanVien(ltv), overTime(ltv.overTime) {}
    ~LapTrinhVien() {}

    int TinhLuong() override{
        salary = luongCoBan + overTime * 200000;
        return salary;
    }
    friend istream& operator>>(istream &is, LapTrinhVien &ltv) {
        is >> (NhanVien&)ltv;
        cout << "Nhap so gio lam them: "; is >> ltv.overTime;
        is.ignore();
        return is;
    }
    friend ostream& operator<<(ostream &os, LapTrinhVien &ltv) {
        os << "Thong tin lap trinh vien" << endl;
        os << (NhanVien&)ltv;
        os << "So gio lam them: " << ltv.overTime << endl;
        os << "Luong: " << ltv.salary << endl;
        return os;
    }
};
class KiemChungVien: public NhanVien {
private:
    int soLoi;
public:
    KiemChungVien(): NhanVien(), soLoi(0) {}
    KiemChungVien(string maNV, string hoTen, int tuoi, string SDT, string email, int luongCoBan, int soLoi): NhanVien(maNV, hoTen, tuoi, SDT, email, luongCoBan), soLoi(soLoi) {}
    KiemChungVien(const KiemChungVien &kcv): NhanVien(kcv), soLoi(kcv.soLoi) {}
    ~KiemChungVien() {}
    int TinhLuong() override {
        salary = luongCoBan + soLoi * 50000;
        return salary;
    }
    friend istream& operator>>(istream &is, KiemChungVien &kcv) {
        is >> (NhanVien&)kcv;
        cout << "Nhap so loi kiem chung: "; is >> kcv.soLoi;
        is.ignore();
        return is;
    }
    friend ostream& operator<<(ostream &os, KiemChungVien &kcv) {
        os << "Thong tin kiem chung vien" << endl;
        os << (NhanVien&)kcv;
        os << "So loi kiem chung: " << kcv.soLoi << endl;
        os << "Luong: " << kcv.salary << endl;
        return os;
    }
};

int main() {
    int n, m; 
    cout << "Nhap so lap trinh vien: "; cin >> n;
    cout << "Nhap so kiem chung vien: "; cin >> m;
    cin.ignore();
    LapTrinhVien ltv[n];
    KiemChungVien kcv[m];

    double luongtb = 0;
    cout << "Nhap thong tin lap trinh vien" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin lap trinh vien thu " << i+1 << endl;
        cin >> ltv[i];
        luongtb += ltv[i].TinhLuong();
    }
    for(int i = 0; i < m; i++) {
        cout << "Nhap thong tin kiem chung vien thu " << i+1 << endl;
        cin >> kcv[i];
        luongtb += kcv[i].TinhLuong();
    }
    luongtb = luongtb / (n+m);

    cout << "Danh sach nhan vien" << endl;
    for(int i = 0; i < n; i++) {
        cout << ltv[i];
    }
    for(int i = 0; i < m; i++) {
        cout << kcv[i];
    }
    cout << "Luong trung binh cua nhan vien: " << luongtb << endl;

    cout << "Ma nhan vien cua cac nhan vien luong thap hon luong trung binh" << endl;
    for(int i = 0; i < n; i++) {
        if(ltv[i].TinhLuong() < luongtb) {
            cout << ltv[i].getMaNV() << " ";
        }
    }
    for(int i = 0; i < m; i++) {
        if(kcv[i].TinhLuong() < luongtb) {
            cout << kcv[i].getMaNV() << " ";
        }
    }
}
