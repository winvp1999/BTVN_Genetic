//Bai 12. Viet chuong trinh nhap mot so nguyen va
//  in ra so dao nguoc (ve thu tu) cua so nguyen
//  vua nhap do. VD: nhap vao 2345 xuat ra 5432
#include <iostream>
using namespace std;
long Reverse(long x)
{
    long ReverseValue = 0;
    while (x > 0)
    {
        ReverseValue = ReverseValue * 10 + x % 10;
        x /= 10;
    }
    return ReverseValue;
}
void b12()
{
    system("cls");
    long IntValue;
    //Input
    cout << "Nhap vao mot so nguyen duong\t: ";
    cin >> IntValue;
    //Output
    cout << "\nSo dao nguoc cua so vua nhap la\t: " 
        << Reverse(IntValue);
}
int main()
{
    b12();

    return 1;
}