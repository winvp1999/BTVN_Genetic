// Bai 7. Bai toan sinh vien
//     - Nhap ten, diem 3 mon Toan, Ly, Hoa. Tinh diem trung binh
//     va xep loai sinh vien
//     B1: Nhap 10 sinh vien
//     B2: Hoi nguoi dung co muon tiep tuc hay khong, neu khong
//     thi tat chuong trinh va luu du lieu ra file
//     B3: Neu tiep tuc thi co nguoi dung nhap tiep sau do lai
//     quay lai B2.
#include <iostream>
#include <fstream>
using namespace std;
class Students
{
    public:
    string Name;
    float Math, Physics, Chemistry;
    Students()
    {
        Name = "";
        Math = 0;
        Physics = 0;
        Chemistry = 0;
    }
    void input()
    {
        cout << "\nNhap vao ho ten cua sinh vien\t: ";
        cin >> this->Name;
        cout << "\nNhap vao diem trung binh mon Toan : ";
        cin >> this->Math;
        cout << "\nNhap vao diem trung binh mon Ly   : ";
        cin >> this->Physics;
        cout << "\nNhap vao diem trung binh mon Hoa  : ";
        cin >> this->Chemistry;
    }
};
int ToInt(string str)
{
    int Result = 0;
    for (int i = 0; i < str.length(); i++)
    Result = Result * 10 + str[i] - 48;
    return Result;
}
char Classificate(float x, float y, float z)
{
    float average = (x + y + z) / 3;
    if (average >= 9) return 'A';
    if (average >= 7) return 'B';
    if (average >= 5) return 'C';
    return 'D';
}
void b7()
{
     system("cls");
    int Quantity = 10, choice = 1;
    char XepLoai;
    Students *SinhVien = nullptr, *Backup = nullptr;
    string str;

    //Input
    SinhVien = new Students[Quantity];
    for (int i = 0; i < Quantity; i++)
    {
        cout << "\nNhap vao thong tin sinh vien thu " << i + 1;
        SinhVien[i].input();
        // cout << "\nNhap vao ho ten cua sinh vien\t: ";
        // cin >> SinhVien[i].Name;
        // cout << "\nNhap vao diem trung binh mon Toan : ";
        // cin >> SinhVien[i].Math;
        // cout << "\nNhap vao diem trung binh mon Ly   : ";
        // cin >> SinhVien[i].Physics;
        // cout << "\nNhap vao diem trung binh mon Hoa  : ";
        // cin >> SinhVien[i].Chemistry;
    }
    //Output
    cout << endl; 
    cout << "\nDanh sach lop gom " << Quantity << " sinh vien"
        << "\nHo ten\t\tToan\tLy\tHoa\tXep loai" << endl;
    for (int i = 0; i < Quantity; i++)
    {
        XepLoai = Classificate(SinhVien[i].Math, SinhVien[i].Physics, SinhVien[i].Chemistry);
        cout << SinhVien[i].Name << "\t\t"
            << SinhVien[i].Math << "\t"
            << SinhVien[i].Physics << "\t"
            << SinhVien[i].Chemistry << "\t"
            << XepLoai
            << endl;
    }
    while (choice)
    {
        cout << "\nBan co muon tiep tuc nhap du lieu nua khong?"
            << "\n\t1. Co\t0. Khong"
            << "\nNhap vao lua chon cua ban : ";
        cin >> choice;
        if (!choice)
        {
            ofstream Output("SinhVien.txt");
            Output << "\nDanh sach lop gom " << Quantity << " sinh vien" << endl;
            for (int i = 0; i < Quantity; i++)
            {
                XepLoai = Classificate(SinhVien[i].Math, SinhVien[i].Physics, SinhVien[i].Chemistry);
                Output << SinhVien[i].Name << "\t\t"
                    << SinhVien[i].Math << "\t"
                    << SinhVien[i].Physics << "\t"
                    << SinhVien[i].Chemistry << "\t"
                    << "Xep loai : " << XepLoai
                    << endl;
            }
        }
        else
        {
            Backup = new Students[Quantity];
            for (int i = 0; i < Quantity; i++) Backup[i] = SinhVien[i];

            delete SinhVien;
            SinhVien = nullptr;
            SinhVien = new Students[Quantity + 1];

            for (int i = 0; i < Quantity; i++)
            SinhVien[i] = Backup[i];
            Quantity++;

            cout << "\nNhap vao thong tin sinh vien thu " << Quantity;
            SinhVien[Quantity - 1].input();

            delete Backup;
            Backup = nullptr;
        }
    }
    
    
}
int main()
{
    b7();

    return 1;
}