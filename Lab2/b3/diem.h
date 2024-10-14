#ifndef DIEM_H
#define DIEM_H

class Diem {
private:
    float iHoanh, iTung;
public:
    friend class DaGiac;
    Diem();
    Diem(float iHoanh, float iTung);
    Diem(const Diem& x);
    void Xuat();
    void Nhap();
    float GetTungDo();
    float GetHoanhDo();
    void SetTungDo(float iTung);
    void SetHoanhDo(float iHoanh);
    void TinhTien(float x, float y);
};
#endif