#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
    for(char ch:s) {
        if(ch != ' ' && (ch < 'A' || ch > 'z')) return false;
    }
    return true;
}
class Flight {
private:
    string id, dest, depart;
    int day, month, year;
    int hour, minute;
    int dayOfMonths[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string date, time;

public:
    Flight(string id, string dest, string depart, string date, string time):id(id), dest(dest), depart(depart), date(date), time(time) {

        // Kiem tra tinh dung dan cua du lieu
        if(!check(dest) || !check(depart)) {
            throw "Noi den va noi di khong hop le";
        }
        if(id.size() != 5 || time.size() != 5 || date.size() != 10 || dest.size() > 20 || depart.size() > 20 || dest.size() == 0 || depart.size() == 0) {
            throw "Do dai du lieu khong hop le";
        }
        if(date[2] != '/' || date[5] != '/') {
            throw "Ngay thang nam khong hop le";
        }
        if(time[2] != ':') {
            throw "Gio phut khong hop le";
        }
        for(char ch:id) {
            if((ch < 'A' || ch > 'z') && (ch < '0' || ch > '9')
                throw "Ma chuyen bay khong hop le";
        }
        for(char ch:date) {
            if(ch != '/' && (ch < '0' || ch > '9')) {
                throw "Ngay thang nam khong hop le";
            }
        }
        for(char ch:time) {
            if(ch != ':' && (ch < '0' || ch > '9')) {
                throw "Gio phut khong hop le";
            }
        }

        // Chuyen doi du lieu
        day = stoi(date.substr(0, 2));
        month = stoi(date.substr(3, 2));
        year = stoi(date.substr(6, 4));
        hour = stoi(time.substr(0, 2));
        minute = stoi(time.substr(3, 2));
        if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) dayOfMonths[2] = 29;
        if(day < 1 || day > dayOfMonths[month] || month < 1 || month > 12 || hour < 0 || hour > 23 || minute < 0 || minute > 59) {
            throw "Ngay thang nam gio phut khong hop le";
        }
    }
    string getId() {
        return id;
    }

    Flight operator>(Flight f) { // overloading operator de su dung ham sort
        if(year == f.year && month == f.month && day == f.day) {
            return hour * 60 + minute > f.hour * 60 + f.minute;
        }
        return year > f.year || (year == f.year && month > f.month) || (year == f.year && month == f.month && day > f.day);
    }
    bool FindFlight(string s) {
        return s == id || s == dest || s == depart;
    }
    bool FromAndDate(string from, string datee) {
        return from == depart && datee == date;
    }
    bool FlightTo(string from, string to) {
        return to == dest && from == depart;
    }
};
Flight Nhap() {
    string id, dest, depart, date, time;
    cout << "Nhap ma chuyen bay: "; cin >> id;
    cout << "Nhap noi den: "; cin.ignore(); getline(cin, dest);
    cout << "Nhap noi di: "; cin.ignore(); getline(cin, depart);
    cout << "Nhap ngay: "; cin >> date;
    cout << "Nhap gio: "; cin >> time;
    return Flight(id, dest, depart, date, time);
}
void FindByIdDestDepart(vector<Flight> flights) {
    cout << "Nhap ma chuyen bay, noi den hoac noi di can tim: ";
    string s; cin.ignore(); getline(cin, s);
    bool isFound = false;
    for(Flight f:flights) {
        if(f.FindFlight(s)) {
            cout << f.getId() << endl;
            isFound = true;
        }
    }
    if(!isFound) {
        cout << "Khong tim thay chuyen bay hop le " << s << endl;
}
void FindByFromAndDate(vector<Flight> flights) {
    cout << "Tim chuyen bay di tu noi di va ngay khoi hanh\n";
    string datee, from;
    cout << "Nhap noi di: "; cin.ignore(); getline(cin, from);
    cout << "Nhap ngay: "; cin >> datee;
    cout << "Danh sach chuyen bay co noi di la " << from << " va ngay la " << datee << endl;
    for(Flight f:flights) {
        if(f.FromAndDate(from, datee)) cout << f.getId() << endl;
    }
}
void FindByFlightTo(vector<Flight> flights) {
    cout << "Tim chuyen bay di tu noi di den noi den\n";
    string from, to;
    cout << "Nhap noi di: "; cin.ignore(); getline(cin, from);
    cout << "Nhap noi den: "; cin.ignore(); getline(cin, to);
    for(Flight f:flights) {
        if(f.FlightTo(from, to)) cout << f.getId() << endl;
    }
}
int main() {
    cout << "Nhap so luong chuyen bay: ";
    int n; cin >> n;
    vector<Flight> flights;
    for(int i=0; i<n; i++) {
        cout << "Nhap chuyen bay thu " << i+1 << endl;
        flights.push_back(Nhap());
    }
    sort(flights.begin(), flights.end());
    cout << "Danh sach ma chuyen bay sap xep theo gio khoi hanh: " << endl;
    for(Flight f:flights) cout << f.getId() << endl;

    FindByIdDestDepart(flights);
    FindByFromAndDate(flights);
    FindByFlightTo(flights);
    // Bai dai qua thay oi
    return 0;
}