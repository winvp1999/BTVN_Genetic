// Bai 1. Cong hai so su dung con tro
#include <iostream>
using namespace std;
void b1()
{
    system("cls");
    double *Pointer1 = nullptr, *Pointer2 = nullptr,
        Value1, Value2;
    //Input
    cout << "Nhap vao so thu nhat\t: ";
    cin >> Value1;
    cout << "Nhap vao so thu hai\t: ";
    cin >> Value2;

    Pointer1 = &Value1;
    Pointer2 = &Value2;

    //Output
    cout << "Tong hai so : " << *Pointer1 + *Pointer2;
}
int main()
{
    b1();

    return 1;
}