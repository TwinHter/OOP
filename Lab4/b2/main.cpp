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
    rooms.push_back(new Deluxe(3, 100000, 200000));  // 3 đêm, phí dịch vụ 100k, phí phục vụ 200k
    rooms.push_back(new Premium(2, 50000));          // 2 đêm, phí dịch vụ 50k
    rooms.push_back(new Business(5));                // 5 đêm
    rooms.push_back(new Deluxe(4, 150000, 250000));  // 4 đêm, phí dịch vụ 150k, phí phục vụ 250k
    rooms.push_back(new Premium(3, 75000));          // 3 đêm, phí dịch vụ 75k

    // Xuất thông tin các phòng
    for (int i = 0; i < rooms.size(); i++) {
        rooms[i]->Xuat();
        cout << endl;
    }
    // Tìm phòng có doanh thu cao nhất và xuất thông tin
    Room* bestRoom = DoanhThuCaoNhat(rooms);
    bestRoom->Xuat();

    return 0;
}
