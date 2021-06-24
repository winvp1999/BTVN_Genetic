//Bai 8. Viet chuong trinh nhap so duong va ket thuc khi nhap so am
#include <iostream>
using namespace std;
void b8()
{
    system("cls");
    float Value;
    bool Negative = true;
    //Input
    cout << "Nhap vao mot so bat ky\t\t: ";
    cin >> Value;
    while (Value >= 0)
    {
        fflush(stdin);
        cout << "\nTiep tuc nhap vao mot so bat ky\t: ";
        cin >> Value;
    }
    //Output
    cout << "\nSo am vua nhap la\t\t: " << Value;
}
int main()
{
    b8();

    return 1;
}