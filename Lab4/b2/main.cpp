#include "Deluxe.h"
#include "Premium.h"
#include "Business.h"
#include <iostream>
#include <vector>
using namespace std;

// Hàm tìm phòng có doanh thu cao nhất
Room* DoanhThuCaoNhat(vector<Room*>& rooms) {
    Room* ans = rooms[0];
    for (int i = 1; i < rooms.size(); i++) {
        if (rooms[i]->GetDoanhThuPhong() > ans->GetDoanhThuPhong()) {
            ans = rooms[i];
        }
    }
    return ans;
}

int main() {
    vector<Room*> rooms;

    // Thêm các phòng vào danh sách
    rooms.push_back(new Deluxe(3, -100000, 200000));  
    rooms.push_back(new Premium(-120, 50000));        
    rooms.push_back(new Business(5));                
    rooms.push_back(new Deluxe(4, 150000, -250000));  
    rooms.push_back(new Premium(-3, 75000));          

    // Xuất thông tin các phòng
    for (int i = 0; i < rooms.size(); i++) {
        rooms[i]->Xuat();
        cout << endl;
    }
    // Tìm phòng có doanh thu cao nhất và xuất thông tin
    cout << "Phong co doanh thu cao nhat: " << endl;
    Room* bestRoom = DoanhThuCaoNhat(rooms);
    if(bestRoom->GetDoanhThuPhong() < 0) {
        cout << "Khong co phong hop le" << endl;
    }
    else
        bestRoom->Xuat();

    return 0;
}
