//Bai 2. Xay dung lop truoc Candidate (thi sinh) gom
//  cac thuoc tinh: ma, ten, ngay thang nam sinh, diem
//  thi Toan, Van, Anh va cac phuong thuc can thiet.
//  Xay dung lop TestCandidate de kiem tra lop tren:
//  - Nhap vao n thi sinh (do nguoi dung nhap).
//  - In ra thong tin ve cac thi sinh co tong diem lon
//  hon 15.
#include <iostream>
#include <stdlib.h>
using namespace std;
//Lop thi sinh
class Candidate
{
    private:
    string ID, Name, Birthday;
    float Math, Literature, English;
    public:
    Candidate()
    {
        this->ID = "";
        this->Name = "";
        this->Birthday = "";
        this->Math = 0;
        this->Literature = 0;
        this->English = 0;
    }
    ~Candidate(){}
    void Input(int Ordinal)
    {
        cout << "\nNhap vao thong tin cua thi sinh thu " << Ordinal + 1 << " :";
        cout << "\nNhap ma thi sinh : ";
        fflush(stdin);
        getline(cin, this->ID);
        cout << "\nNhap ho va ten : ";
        fflush(stdin);
        getline(cin, this->Name);
        cout << "\nNhap ngay sinh : ";
        fflush(stdin);
        getline(cin, this->Birthday);
        cout << "Nhap diem Toan : ";
        cin >> this->Math;
        cout << "Nhap diem Van : ";
        cin >> this->Literature;
        cout << "Nhap diem Anh : ";
        cin >> this->English;
    }
    void Output()
    {
        cout << "\nMa so : " << this->ID
            << "\nHo va ten : " << this->Name
            << "\nNgay sinh : " << this->Birthday
            << "\nDiem Toan : " << this->Math
            << "\nDiem Van  : " << this->Literature
            << "\nDiem Anh  : " << this->English
            << "\nTong diem 3 mon : " << this->Sum()
            << endl;
    }
    float Sum()
    {
        return this->Math + this->Literature + this->English;
    }
    Candidate operator=(const Candidate &p)
    {
        Candidate candidate;
        candidate.ID = p.ID;
        candidate.Name = p.Name;
        candidate.Birthday = p.Birthday;
        candidate.Math = p.Math;
        candidate.Literature = p.Literature;
        candidate.English = p.English;
        return candidate;
    }
};
//Lop quan ly cac thi sinh
class TestCandidate : public Candidate
{
    public:
    int Quantity;
    Candidate* Array;
    TestCandidate()
    {
        this->Quantity = 0;
        this->Array = new Candidate[0];
    }
    TestCandidate(const TestCandidate &p)
    {
        this->Quantity = p.Quantity;
        delete this->Array;
        this->Array = nullptr;
        this->Array = new Candidate[Quantity];
        for (int i = 0; i < p.Quantity; i++)
        {
            *(this->Array + i) = p.Array[i];
        }
    }
    ~TestCandidate()
    {
        delete this->Array;
    }
    void InputTest()
    {
        cout << "Nhap vao so luong thi sinh : ";
        cin >> this->Quantity;
        delete this->Array;
        this->Array = nullptr;
        this->Array = new Candidate[Quantity];
        for (int i = 0; i < this->Quantity; i++)
        this->Array[i].Input(i);
    }
    void OutputTest()
    {
        for (int i = 0; i < this->Quantity; i++)
        if (this->Array[i].Sum() > 15)
        this->Array[i].Output();
    }
};
//Xu ly chuong trinh
void b2()
{
    system("cls");
    TestCandidate ThiSinh;
    //Input
    ThiSinh.InputTest();
    //Output
    ThiSinh.OutputTest();
}
int main()
{
    b2();

    return 1;
}