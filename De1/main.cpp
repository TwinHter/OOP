#include "Friend.h"
#include "BestFriend.h"
#include "BoyFriend.h"
#include "OtherBoy.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

vector<Friend*> arr;

Friend* InputData(int type) {
    string name;
    int age;
    string phone;
    double income;
    double attractiveness;
    switch(type) {
        case 1:
            cin >> name >> age >> phone;
            return new BestFriend(name, age, phone);
        case 2:
            cin >> name >> age >> income;
            return new BoyFriend(name, age, income);
        case 3:
            cin >> name >> age >> attractiveness;
            return new OtherBoy(name, age, attractiveness);
    }
}
Friend* MostImportantFriend(vector <Friend*> arr) {
    Friend* res = arr[0];
    for(int i=1; i<arr.size(); i++) {
        if(arr[i]->GetThoiGian() > res->GetThoiGian()) {
            res = arr[i];
        }
    }
    return res;
}
int main() {
    int n; cin >> n;
    double timee[4];
    for(int i=1; i<=n; i++) {
        int type;
        cin >> type;
        arr.push_back(InputData(type));
        if(type != 3) arr[i-1]->TinhThoiGian();
        else arr[i-1]->TinhThoiGian(n);
        timee[type] += arr[i-1]->GetThoiGian();
    }
    cout << "Thong ke: " << endl;
    cout << "   -  Thoi gian cho ban than: " << fixed << setprecision(2) << timee[1] << "h" << endl;
    cout << "   -  Thoi gian cho ban trai: " << fixed << setprecision(2) << timee[2] << "h" << endl;
    cout << "   -  Thoi gian cho ban trai khac: " << fixed << setprecision(2) << timee[3] << "h" << endl;

    cout << "Nguoi ban quan trong nhat: " << endl; 
    MostImportantFriend(arr)->Xuat();
}