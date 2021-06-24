#include <iostream>
#include <stdlib.h>

using namespace std;

void b1()
{
    long BienNguyen1, BienNguyen2;
    float BienThuc;
    
    //Nhap vao du lieu tu ban phim
    cout << "Nhap vao mot so nguyen\t\t: ";
    cin >> BienNguyen1;
    cout << "\nNhap tiep vao mot so nguyen\t: ";
    cin >> BienNguyen2;
    cout << "\nNhap vao mot so thuc\t\t: ";
    cin >> BienThuc;

    //In ra man hinh
    cout << "\nHai bien so nguyen la \t: " << BienNguyen1
        << " va " << BienNguyen2
        << "\nBien so thuc\t\t: " << BienThuc;
}

void b2()
{
    string Name;
       
    //Nhap vao du lieu tu ban phim
    cout << "Nhap vao ho ten cua ban : ";
    getline(cin, Name);

    //In ra man hinh
    cout << "\nHo va ten : " << Name;


}

void b3()
{
    int SoNguyen = 69;
    float SoThuc = 99.69;
    char Character = '@';
    
    //In ra man hinh
    cout << "\nBien so nguyen\t: " << SoNguyen
        << "\nBien so thuc\t: " << SoThuc
        << "\nKy tu\t\t: " << Character;
}

void b4()
{
    long FirstNumber, SecondNumber;
    //Nhap vao 2 so tu ban phim
    cout << "Nhap vao so thu nhat\t: ";
    cin >> FirstNumber;
    cout << "Nhap vao so thu hai\t: ";
    cin >> SecondNumber;
    //In ket qua ra man hinh
    cout << "\nTong cua hai so\t\t: " << FirstNumber + SecondNumber         // Tong
        << "\nHieu cua hai so\t\t: " << FirstNumber - SecondNumber          // Hieu
        << "\nTich cua hai so\t\t: " << FirstNumber * SecondNumber          // Tich
        << "\nThuong cua hai so\t: " << (float) FirstNumber / SecondNumber; // Thuong
}

void b5()
{
    long FirstNumber, SecondNumber;
    //Nhap vao 2 so tu ban phim
    cout << "Nhap vao so thu nhat\t: ";
    cin >> FirstNumber;
    cout << "Nhap vao so thu hai\t: ";
    cin >> SecondNumber;
    //In ket qua ra man hinh
    cout << "\nTong cua hai so\t\t\t: " << FirstNumber + SecondNumber                       // Tong
        << "\nTrung binh cong cua hai so\t: " << (float) (FirstNumber + SecondNumber) / 2;  // Trung binh cong
        
}

void b6()
{
    float InitVelocity, Accelerate, Time;
    //Input data
    cout << "Nhap vao van toc ban dau\t: ";
    cin >> InitVelocity;
    cout << "Nhap vao gia toc cua vat\t: ";
    cin >> Accelerate;
    cout << "Thoi gian vat di chuyen\t\t: ";
    cin >> Time;
    //Output
    cout << "\nVan toc sau khoang thoi gian " << Time << " giay la : "
        << InitVelocity + (Accelerate * Time); 
        //Cong thuc tinh van toc theo gia toc va thoi gian
}

void b7()
{
    float Point_1, Point_2, Point_3, MidPoint, FinalPoint;
    //Input
    cout << "Nhap vao diem kiem tra lan thu nhat\t: ";
    cin >> Point_1;
    cout << "Nhap vao diem kiem tra lan thu hai\t: ";
    cin >> Point_2;
    cout << "Nhap vao diem kiem tra lan thu ba\t: ";
    cin >> Point_3;
    cout << "Nhap vao diem kiem tra giua ky\t\t: ";
    cin >> MidPoint;
    cout << "Nhap vao diem kiem tra cuoi ky\t\t: ";
    cin >> FinalPoint;

    float s = Point_1 + Point_2 + Point_3 + MidPoint + FinalPoint;

    //Output
    cout << "\nTong diem kiem tra\t: " << s
        << "\nDiem trung binh\t\t: " << s / 5;
}

void b8()
{
    long x, y, p, s, q;
    //Input
    cout << "Nhap vao so nguyen thu nhat\t: ";
    cin >> x;
    cout << "Nhap vao so nguyen thu hai\t: ";
    cin >> y;
    
    p = x * y;
    s = x + y;
    q = s * s + p * (s - x) * (p + y);

    //Output
    cout << "\nTich hai so\t\t: " << p
        << "\nTong hai so\t\t: " << s
        << "\nKet qua phuong trinh\t: " << q;
}

int main()
{
    int choice;
    do
    {
        system("cls");
        cout << "Nhap bai muon kiem tra : ";
        cin >> choice;
        fflush(stdin);
        switch (choice)
        {
        case 1:
            b1();
            break;
        case 2:
            b2();
            break;
        case 3:
            b3();
            break;
        case 4:
            b4();
            break;
        case 5:
            b5();
            break;
        case 6:
            b6();
            break;
        case 7:
            b7();
            break;
        case 8:
            b8();
            break;
        default:
            break;
        }
        cout << endl;
        system("pause");
    } while (choice > 0 && choice < 9); 
    
    return 1;
}