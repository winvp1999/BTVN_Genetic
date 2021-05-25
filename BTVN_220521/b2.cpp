//Bai 2. Viet chuong trinh xep hang hoc luc cua cac hoc sinh dua tren
//  cac diem bai kiem tra, diem thi giua ky, diem thi cuoi ky. Neu:
//      Diem trung binh >= 9.0            la hang A
//      Diem trung binh >= 7.0 va < 9.0   la hang B
//      Diem trung binh >= 5.0 va < 7.0   la hang C
//      Diem trung binh < 5.0             la hang F
//  Chu y diem trung binh bang diem kiem tra + diem thi giua ky + diem
//  thi cuoi ky chia cho 3 (Su dung if else)
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void b2()
{
    float DiemTrungBinh = 0, DiemKiemTra, 
        DiemKiemTraTrungBinh = 0, DiemGiuaKy, DiemCuoiKy;
    int SoBaiKiemTra = 0;
    char XepHang = ' ';
    //Input
    cout << "Nhap so bai kiem tra : ";
    cin >> SoBaiKiemTra;
    for (int LanKiemTra = 1; LanKiemTra <= SoBaiKiemTra; LanKiemTra++)
    {
        cout << "\nNhap diem kiem tra lan thu " << LanKiemTra << " : ";
        cin >> DiemKiemTra;
        DiemKiemTraTrungBinh += DiemKiemTra / SoBaiKiemTra;
    }
    cout << "Diem kiem tra trung binh : " << DiemKiemTraTrungBinh;
    cout << "\nNhap diem kiem tra giua ky : ";
    cin >> DiemGiuaKy;
    cout << "\nNhap diem kiem tra cuoi ky : ";
    cin >> DiemCuoiKy;

    DiemTrungBinh = (DiemKiemTraTrungBinh + DiemGiuaKy + DiemCuoiKy) / 3;

    //Output
    cout << "\nDiem trung binh cua hoc sinh nay la : " << DiemTrungBinh;

    if (DiemTrungBinh >= 9) XepHang = 'A';
    else if (DiemTrungBinh >= 7) XepHang = 'B';
    else if (DiemTrungBinh >= 5) XepHang = 'C';
    else if (DiemTrungBinh < 5) XepHang = 'F';
    else if (DiemTrungBinh > 10)
    {
        //cout << "\nSuc v.. A nham quai vat day roi!!!";
        cout << "\nKhong phai nguoi";
    }
    else if (DiemTrungBinh < 0)
    {
        //cout << "\nNgu khong do duoc";
        cout << "\nCan co gang hon";
    }

    if (XepHang != ' ') cout << "\nXep hang hoc luc thuoc hang " << XepHang;

    ofstream FileKetQua("KetQuaBai2.txt");
    FileKetQua << "A";
    FileKetQua.close();
}
int main()
{
    
    b2();

    return 1;
}