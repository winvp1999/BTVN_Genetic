//Bai 1. Viet chuong trinh khai bao 2 bien nguyen, 1 bien thuc
//  sau do in ket qua ra ngoai man hinh
#include <iostream>
using namespace std;
void b1()
{
    long BienNguyen1, BienNguyen2;
    float BienThuc;
    
    //Input
    cout << "Nhap vao mot so nguyen\t\t: ";
    cin >> BienNguyen1;
    cout << "\nNhap tiep vao mot so nguyen\t: ";
    cin >> BienNguyen2;
    cout << "\nNhap vao mot so thuc\t\t: ";
    cin >> BienThuc;

    //Output
    cout << "\nHai bien so nguyen la \t: " << BienNguyen1
        << " va " << BienNguyen2
        << "\nBien so thuc\t\t: " << BienThuc;
}
int main()
{
    system("cls");
    fflush(stdin);

    b1();

    return 1;
}
