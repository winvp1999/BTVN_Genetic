//Bai 3: Bai toan sinh vien:
//  Viet chuong trinh nhap vao ten sinh vien, diem trung
//  binh 3 mon toan, ly, hoa. Tu diem trung binh 3 mon xep
//  loai sinh vien do thuoc loai nao.
//      - Gioi han 20 sinh vien 1 lop
//      - Cach xep loai
//          Diem trung binh >= 9 la loai A
//          Diem trung binh >= 7 la loai B
//          Diem trung binh >= 5 la loai C
//          Diem trung binh < 5 la loai D
//      - Ghi danh sach sinh vien da nhap vao file theo lua chon
//  cua nguoi dung
//      - Sau khi chay chuong trinh lan 2 neu file da co du lieu
//  thi chi can doc file va in ra man hinh khong can phai ghi lai
#include <iostream>
#include <fstream>
#include <string>
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
void b3()
{
    system("cls");
    int Quantity, choice;
    char XepLoai;
    Students *SinhVien;
    string str;
    ifstream Input("SinhVien.txt");
    

    //Input
    getline(Input,str);
    if (str == "")
    {
        if (str == "") cout << "File chua co du lieu";
        cout << "\nNhap so luong sinh vien trong lop\t: ";
        cin >> Quantity;
        while (Quantity > 20)
        {
            cout << "\nSo luong sinh vien trong mot lop khong duoc vuot qua 20"
                << "\nNhap lai so luong sinh vien trong lop\t: ";
            cin >> Quantity;
        }
        
        SinhVien = new Students[Quantity];
        for (int i = 0; i < Quantity; i++)
        {
            cout << "\nNhap vao thong tin sinh vien thu " << i + 1;
            cout << "\nNhap vao ho ten cua sinh vien\t: ";
            cin >> SinhVien[i].Name;
            cout << "\nNhap vao diem trung binh mon Toan : ";
            cin >> SinhVien[i].Math;
            cout << "\nNhap vao diem trung binh mon Ly   : ";
            cin >> SinhVien[i].Physics;
            cout << "\nNhap vao diem trung binh mon Hoa  : ";
            cin >> SinhVien[i].Chemistry;
        }
    }
    else
    {
        Quantity = ToInt(str);
        SinhVien = new Students[Quantity];
        for (int i = 0; i < Quantity; i++)
        {            
            Input >> SinhVien[i].Name
                >> SinhVien[i].Math
                >> SinhVien[i].Physics
                >> SinhVien[i].Chemistry;
        }
    }
    Input.close();
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
    if (str == "")
    {
            cout << "Ban co muon luu du lieu vua nhap vao file khong"
            << "\n\t1. Co\t0. Khong"
            << "\nNhap vao lua chon cua ban : ";
        cin >> choice;
        if (choice)
        {
            ofstream Output("SinhVien.txt");
            Output << Quantity << endl;
            for (int i = 0; i < Quantity; i++)
            {
                Output << SinhVien[i].Name << endl
                    << SinhVien[i].Math << endl
                    << SinhVien[i].Physics << endl
                    << SinhVien[i].Chemistry << endl;
            }
        }    
    }
    
}
int main()
{
    b3();

    return 1;
}

