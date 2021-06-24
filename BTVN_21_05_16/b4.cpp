//Bai 4. Tim tong, hieu, tich, thuong cua hai so nguyen va in
//  ket qua ra man hinh
#include <iostream>
using namespace std;
void b4()
{
    long FirstNumber, SecondNumber;
    //Input
    cout << "Nhap vao so thu nhat\t: ";
    cin >> FirstNumber;
    cout << "Nhap vao so thu hai\t: ";
    cin >> SecondNumber;

    //Output
    cout << "\nTong cua hai so\t\t: " << FirstNumber + SecondNumber         // Tong
        << "\nHieu cua hai so\t\t: " << FirstNumber - SecondNumber          // Hieu
        << "\nTich cua hai so\t\t: " << FirstNumber * SecondNumber          // Tich
        << "\nThuong cua hai so\t: " << (float) FirstNumber / SecondNumber; // Thuong
}
int main()
{
    system("cls");
    fflush(stdin);

    b4();

    return 1;
}