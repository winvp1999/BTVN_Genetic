//Bai 8. Viet chuong trinh nhap hai so nguyen x, y, sau do
//  tinh: p = x * y, s = x + y, q = s^2 + p * (s - x) * (p + y)
//  va in ket qua ra man hinh
#include <iostream>
using namespace std;
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
    system("cls");
    fflush(stdin);

    b8();

    return 1;
}