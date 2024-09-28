#include<bits/stdc++.h>
using namespace std;

class SoTietKiem {
private:
    string maSo, loaiTK, name, CMND, dateOpen;
    int dayOpen, monthOpen, yearOpen;
    int dayInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    double money, laiSuat = 0.1;
public:
    SoTietKiem(string maSo, string loaiTK, string name, string CMND, string dateOpen, double money): maSo(maSo), loaiTK(loaiTK), name(name), CMND(CMND), dateOpen(dateOpen), money(money) {
        if(maSo.size() != 5 || name.size() > 30 || (CMND.size() != 9 && CMND.size() != 12) || dateOpen.size() != 10) {
            throw "Do dai Input khong hop le";
            return;
        }
        for(char ch:maSo) {
            if((ch < '0' || ch > '9') && (ch < 'A' || ch > 'z')) {
                throw "Ma so khong hop le";
                return;
            }
        }
        for(char ch:name) {
            if(ch != ' ' && (ch < 'A' || ch > 'z')) {
                throw "Ten khong hop le";
                return;
            }
        }
        dayOpen = stoi(dateOpen.substr(0, 2));
        monthOpen = stoi(dateOpen.substr(3, 2));
        yearOpen = stoi(dateOpen.substr(6, 4));
        if(yearOpen % 4 == 0 && yearOpen % 100 != 0 || yearOpen % 400 == 0) dayInMonth[2] = 29;
        if(dayOpen < 1 || dayOpen > dayInMonth[monthOpen] || monthOpen < 1 || monthOpen > 12) {
            throw "Ngay thang nam khong hop le";
            return;
        }

        int yearPast = 2024 - yearOpen;
        if(loaiTK == "Ky han") this->money = money * pow(1 + laiSuat, yearPast); // Update so tien sau yearPast nam
    }

    void UpdateMoney() { // Cap nhat so tien sau 1 nam
        if(loaiTK == "Ky han") money += money * laiSuat;
    }
    void Show() {   // Show ra thong tin so tiet kiem
        cout << "Ma so: " << maSo << endl;
        cout << "Loai tiet kiem: " << loaiTK << endl;
        cout << "Ten khach hang: " << name << endl;
        cout << "CMND: " << CMND << endl;
        cout << "Ngay mo so: " << dateOpen << endl;
        cout << "So tien: " << money << endl;
        cout << endl;
    }
    void ShowIdentify() { // Ho tro viec in ra thong tin tim kiem
        cout << "Ma so: " << maSo << endl;
        cout << "CMND: " << CMND << endl;
        cout << endl;
    }
    void ShowMoney() { // Show so tien - ho tro viec in sap xep
        cout << "Ma so: " << maSo << endl;
        cout << "So tien: " << money << endl;
        cout << endl;
    }
    void ShowDate() { // Show ngay mo so - ho tro viec in sap xep
        cout << "Ma so: " << maSo << endl;
        cout << "Ngay mo so: " << dateOpen << endl;
        cout << endl;
    }
    void RutTien(double money) { // Rut tine
        if(money > this->money) {
            throw "So tien rut vuot qua so tien trong tai khoan";
            return;
        }
        this->money -= money;
    }
    void GuiTien(double money) { // Gui tien
        this->money += money;
    }
    bool FindByCMND_or_Maso(string s) { // Tim STK bang CMND hoac ma so
        if(s == maSo || s == CMND) return true;
        return false;
    }
    bool FindBetweenDays(string date1, string date2) { // Tim STK mo giua 2 ngay
        int day1 = stoi(date1.substr(0, 2));
        int month1 = stoi(date1.substr(3, 2));
        int year1 = stoi(date1.substr(6, 4));
        int day2 = stoi(date2.substr(0, 2));
        int month2 = stoi(date2.substr(3, 2));
        int year2 = stoi(date2.substr(6, 4));
        if(year1 > yearOpen || yearOpen > year2) return false;
        if(year1 == yearOpen && month1 > monthOpen) return false;
        if(year2 == yearOpen && monthOpen > month2) return false;
        if(year1 == yearOpen && month1 == monthOpen && day1 > dayOpen) return false;
        if(year2 == yearOpen && month2 == monthOpen && dayOpen > day2) return false;
        return true;
    }
    static bool OrderByMoney(SoTietKiem a, SoTietKiem b) { // So tien gui giam dan
        return a.money > b.money;
    }
    static bool OrderByDate(SoTietKiem a, SoTietKiem b) { // Ngay mo so tang dan
        if(a.yearOpen != b.yearOpen) return a.yearOpen < b.yearOpen;
        if(a.monthOpen != b.monthOpen) return a.monthOpen < b.monthOpen;
        return a.dayOpen < b.dayOpen;
    }
};
SoTietKiem Nhap() {
    string maSo, loaiTK, name, CMND, dateOpen;
    double money = 0;
    cout << "Nhap ma so: "; cin >> maSo;
    cout << "Nhap loai tiet kiem: "; cin.ignore(); getline(cin, loaiTK);
    cout << "Nhap ten: "; getline(cin, name);
    cout << "Nhap CMND: "; cin >> CMND;
    cout << "Nhap ngay mo so: "; cin >> dateOpen;
    cout << "Nhap so tien: ";
    while(money <= 0) cin >> money;
    return SoTietKiem(maSo, loaiTK, name, CMND, dateOpen, money);
}
int main(){
    int n; 
    vector<SoTietKiem> stk;
    cout << "Nhap so luong so tiet kiem: "; cin >> n;
    for(int i=0; i<n; i++) {
        cout << "Nhap thong tin so tiet kiem thu " << i+1 << endl;
        stk.push_back(Nhap());
    }

    cout << "Danh sach so tiet kiem: " << endl;
    for(auto p:stk) p.Show();

    string searchString;
    cout << "Nhap ma so hoac CMND can tim: "; cin >> searchString;
    cout << "Cac STK thoa man la: " << endl;
    for(auto p:stk) {
        if(p.FindByCMND_or_Maso(searchString)) p.ShowIdentify();
    }

    // sort theo so tien giam dan
    sort(stk.begin(), stk.end(), SoTietKiem::OrderByMoney);
    cout << "STK sap xep theo so tim giam dan: \n";
    for(auto p:stk) p.ShowMoney();
    //sort theo ngay mo so tang dan
    sort(stk.begin(), stk.end(), SoTietKiem::OrderByDate);
    cout << "STK sap xep theo ngay mo so tang dan: \n";
    for(auto p:stk) p.ShowDate();
}