#include<bits/stdc++.h>
using namespace std;

class cBook {
private:
    string maSach;
    string tenSach;
    int soTrang;
    int namXuatBan;
    friend class cBookList;
public:
    cBook(string maSach="", string tenSach="", int soTrang=0, int namXuatBan=0): maSach(maSach), tenSach(tenSach), soTrang(soTrang), namXuatBan(namXuatBan) {};
    void Nhap(int id) {
        cout << "Nhap thong tin sach thu " << id << endl;
        cout << "Nhap ma sach: "; cin >> maSach;
        cout << "Nhap ten sach: "; cin >> tenSach;
        cout << "Nhap so trang: "; cin >> soTrang;
        cout << "Nhap nam xuat ban: "; cin >> namXuatBan;
    };
    void Xuat() {
        cout << "Ma sach: " << maSach << endl;
        cout << "Ten sach: " << tenSach << endl;
        cout << "So trang: " << soTrang << endl;
        cout << "Nam xuat ban: " << namXuatBan << endl;
        cout << "----------------------" << endl;
    };
};
class cBookList {
private:
    vector<cBook> bList;
public:
    cBookList() {bList.clear();};
    void Nhap(int n) {
        for (int i = 0; i < n; i++) {
            cBook book;
            book.Nhap(i+1);
            bList.push_back(book);
            // delete &book;
        }
    }
    void Xuat() {
        for (cBook book: bList) book.Xuat();
    }
    void newestBook() {
        int maxx = 0;
        for (int i = 1; i < bList.size(); i++) {
            if (bList[i].namXuatBan > bList[maxx].namXuatBan) {
                maxx = i;
            }
        }
        bList[maxx].Xuat();
    }
};   
int main() {
    cBookList bList;
    int n; cout << "Nhap so sach: "; cin >> n;
    bList.Nhap(n);
    cout << "Thong tin sach: " << endl;
    bList.Xuat();
    cout << "Sach xuat ban gan day nhat: " << endl;
    bList.newestBook();
}