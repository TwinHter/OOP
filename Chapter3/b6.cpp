#include<bits/stdc++.h>
using namespace std;

class SoPhuc {
private:
    double ao, thuc;
public:
    SoPhuc(double thuc, double ao): ao(ao), thuc(thuc) {}
    void Show() {
        if(ao >= 0) cout << thuc << " + " << ao << "i\n";
        else cout << thuc << " - " << -ao << "i\n";
    }
    void Change(double thuc, double ao) {
        this->ao = ao;
        this->thuc = thuc;
    }
    void Nhap() {
        cout << "Nhap phan thuc: "; cin >> thuc;
        cout << "Nhap phan ao: "; cin >> ao;
        this->thuc = thuc; this->ao = ao;
    }
    double getThuc() {
        return thuc;
    }
    double getAo() {
        return ao;
    }
    SoPhuc operator+(SoPhuc x) {
        return SoPhuc(thuc + x.thuc, ao + x.ao);
    }
};
int main() {
    SoPhuc a(0, 0), b(0, 0);
    cout << "So phuc a:\n";
    a.Nhap(); 
    cout << "So phuc b:\n";
    b.Nhap();

    cout << "So phuc a la: "; a.Show();
    cout << "So phuc b la: "; b.Show();
    
    double athuc_tmp, aao_tmp;
    cout << "Nhap phan thuc moi cua a: "; cin >> athuc_tmp;
    cout << "Nhap phan ao moi cua a: "; cin >> aao_tmp;
    a.Change(athuc_tmp, aao_tmp);

    cout << "So phuc a sau khi thay doi la: "; a.Show();

    SoPhuc c = a + b;
    cout << "Tong hai so phuc la: "; c.Show();
}